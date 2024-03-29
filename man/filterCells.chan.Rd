% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/filterCells.R
\name{filterCells.chan}
\alias{filterCells.chan}
\title{Filter out low-quality cells}
\usage{
filterCells.chan(x, discard)
}
\arguments{
\item{x}{A list containing the initialized matrix, as produced by \code{\link{initializeSparseMatrix}}.}

\item{discard}{Logical vector of length equal to the number of cells, specifying which cells in \code{x} should be removed.}
}
\value{
A copy of \code{x} with all the low-quality cells removed.
}
\description{
Remove cells based on the filters defined from QC metrics.
}
\examples{
# Mocking a matrix:
library(Matrix)
x <- round(abs(rsparsematrix(1000, 100, 0.1) * 100))

# Mocking up a subset:
sub <- list(Mito=rbinom(nrow(x), 1, 0.1) > 0)

# Running the analysis:
y <- initializeSparseMatrix(x)
qc <- perCellQCMetrics.chan(y, sub)
filters <- perCellQCFilters.chan(qc$sums, qc$detected, qc$subsets)
filtered <- filterCells.chan(y, filters$filters$overall)

}
\author{
Aaron Lun
}
