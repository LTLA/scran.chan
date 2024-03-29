% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/logNormCounts.R
\name{logNormCounts.chan}
\alias{logNormCounts.chan}
\title{Log-normalize the counts}
\usage{
logNormCounts.chan(
  x,
  size.factors = NULL,
  batch = NULL,
  batch.mode = c("lowest", "perblock"),
  num.threads = 1
)
}
\arguments{
\item{x}{A list of matrix data like that produced by \code{\link{initializeSparseMatrix}}.}

\item{size.factors}{A numeric vector of length equal to the number of cells in \code{x},
containing positive size factors for all cells.}

\item{batch}{Vector or factor of length equal to the number of cells, specifying the batch of origin for each cell.
Alternatively \code{NULL} if all cells belong to the same batch.}

\item{batch.mode}{String indicating how \code{batch} should be handled when centering the size factors.
If \code{"lowest"}, we downscale all batches to the coverage of the lowest batch.
If \code{"perblock"}, we scale each batch to a mean of 1.}

\item{num.threads}{Integer scalar specifying the number of threads to use.}
}
\value{
A list like \code{x} where the count matrix is replaced with a log-expression matrix.
An additional numeric \code{size.factors} vector is also present containing the (centered) size factors.
}
\description{
Compute log-transformed normalized expression values by applying scaling normalization to count data.
}
\examples{
# Mocking a matrix:
library(Matrix)
x <- round(abs(rsparsematrix(1000, 100, 0.1) * 100))
y <- initializeSparseMatrix(x)
normed <- logNormCounts.chan(y)

}
\author{
Aaron Lun
}
