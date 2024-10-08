#' Initialize the count matrix
#'
#' Initialize a matrix object on the C++ side.
#' If the input is a \linkS4class{dgCMatrix}, initialization is performed without copying any data;
#' otherwise an efficient block realization is performed.
#'
#' @param x A matrix-like object.
#' This should contain non-negative integers.
#' @param force.integer Logical scalar indicating whether double-precision \code{x} should be forced into integers.
#' @param no.sparse.copy Logical scalar indicating whether we should avoid a copy when \code{x} is a dgCMatrix.
#' This is more memory efficient if the data has already been loaded into memory.
#' If \code{TRUE}, any setting of \code{force.integer} is ignored.
#' @param by.column Logical scalar indicating whether we should load \code{x} into column-major format.
#' Only applicable when \code{x} is not a dgCMatrix or a H5SparseMatrix, which define their own format.
#' @param num.threads Integer scalar specifying the number of threads to use when initializing \code{x}.
#' For dgCMatrix inputs, this is only relevant when \code{no.sparse.copy = FALSE}.
#'
#' @return A list of internal components that can be used in other \pkg{scran.chan} functions.
#'
#' @details
#' Do not attempt to serialize this object; it contains a pointer to external memory, and will not be valid after a save/load cycle.
#'
#' If \code{no.sparse.copy=TRUE}, the lifetime of the sparse matrix in \code{x} must be greater than the returned pointer. 
#' 
#' @examples
#' # Mocking up a count matrix:
#' x <- Matrix::rsparsematrix(1000, 100, 0.1)
#' y <- round(abs(x))
#'
#' stuff <- initializeSparseMatrix(y)
#' str(stuff)
#'
#' # Trying with a DelayedArray:
#' z <- DelayedArray::DelayedArray(y)
#' stuff2 <- initializeSparseMatrix(z)
#' str(stuff2)
#'
#' # Row-major initialization:
#' stuff2 <- initializeSparseMatrix(z, by.column=FALSE)
#' str(stuff2)
#' 
#' @export
#' @import methods
initializeSparseMatrix <- function(x, force.integer=TRUE, no.sparse.copy=TRUE, by.column=TRUE, num.threads=1) {
    NR <- nrow(x)
    NC <- ncol(x)
    ptr <- NULL
    dim.names <- list(rownames=rownames(x), colnames=colnames(x))

    if (is(x, "DelayedArray") && DelayedArray::isPristine(x, ignore.dimnames=TRUE)) {
        x <- DelayedArray::seed(x)
    }

    if (is(x, "dgCMatrix")) {
        ptr <- initialize_from_memory(x@x, x@i, x@p, NR, NC, no_copy=no.sparse.copy, byrow=FALSE, forced=force.integer)
    } else if (is(x, "dgRMatrix")) {
        ptr <- initialize_from_memory(x@x, x@j, x@p, NR, NC, no_copy=no.sparse.copy, byrow=TRUE, forced=force.integer)
    } else if (is(x, "H5SparseMatrixSeed")) {
        ptr <- initialize_from_hdf5(x@filepath, x@group, NR, NC, byrow=!is(x, "CSC_H5SparseMatrixSeed"), forced=force.integer)
    } 

    if (is.null(ptr)) { 
        # Fallback: we iterate across blocks and add them bit by bit to the
        # matrix so that we never have to load the entire matrix into memory.
        if (by.column) {
            grid <- DelayedArray::colAutoGrid(x)
        } else {
            grid <- DelayedArray::rowAutoGrid(x)
        }

        i <- 0L
        iterator <- function() {
            if (i >= length(grid)) {
                NULL
            } else {
                i <<- i + 1L
                grid[[i]]
            }
        }

        # Doing the sort inside the extractor, so we can exploit compute in multiple cores.
        if (by.column) {
            extractor <- function(vp) {
                output <- S4Arrays::read_block(x, vp, as.sparse=TRUE)
                nzi <- SparseArray::nzwhich(output, arr.ind=TRUE)
                o <- order(nzi[,2], nzi[,1])
                list(row=nzi[o,1] - 1L, column=nzi[o,2] - 1L, value=SparseArray::nzvals(output)[o], ncol=ncol(output))
            }
        } else {
            extractor <- function(vp) {
                output <- S4Arrays::read_block(x, vp, as.sparse=TRUE)
                nzi <- SparseArray::nzwhich(output, arr.ind=TRUE)
                o <- order(nzi[,1], nzi[,2])
                list(row=nzi[o,1] - 1L, column=nzi[o,2] - 1L, value=SparseArray::nzvals(output)[o], nrow=nrow(output))
            }
        }

        is.int <- DelayedArray::type(x) == "integer" || force.integer

        if (by.column) {
            ptr0 <- initialize_from_blocks_CSC(NR, NC, is.int)
            reduction <- function(ignore, block) {
                add_new_block_CSC(ptr0, block$row, block$column, block$value, block$ncol)
            }
        } else {
            ptr0 <- initialize_from_blocks_CSR(NR, NC, is.int)
            reduction <- function(ignore, block) {
                add_new_block_CSR(ptr0, block$row, block$column, block$value, block$nrow)
            }
        }

        if (num.threads==1) {
            while (!is.null(g <- iterator())) {
                reduction(NULL, extractor(g))           
            }
        } else {
            BPPARAM <- BiocParallel::MulticoreParam(num.threads)
            BiocParallel::bpiterate(iterator, FUN=extractor, REDUCE=reduction, init=NULL, reduce.in.order=TRUE, BPPARAM=BPPARAM)
        }
       
        if (by.column) {
            ptr <- finalize_all_blocks_CSC(ptr0)
        } else {
            ptr <- finalize_all_blocks_CSR(ptr0)
        }

        gc(verbose=FALSE) # need to garbage collect the gunk from block processing.
    }

    c(list(pointer=ptr), dim.names)
}
