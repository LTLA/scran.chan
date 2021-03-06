% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/perCellQCMetrics.R
\name{perCellQCMetrics.chan}
\alias{perCellQCMetrics.chan}
\title{Compute per-cell QC metrics}
\usage{
perCellQCMetrics.chan(x, subsets, num.threads = 1)
}
\arguments{
\item{x}{List containing the output of \code{\link{initializeSparseMatrix}}.}

\item{subsets}{List of logical vectors specifying feature subsets of interest.}

\item{num.threads}{Integer scalar specifying the number of threads to use.}
}
\value{
A list containing:
\itemize{
\item \code{sum}, a numeric vector containing the total sum for each cell.
\item \code{detected}, an integer vector containing the number of detected features per cell.
\item \code{subsets}, a list of numeric vectors containing the proportion of counts in each feature subset.
}
Each vector is of length equal to the number of cells.
}
\description{
Calculate per-cell QC metrics from an initialized matrix.
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
summary(qc$sum)
summary(qc$detected)
summary(qc$subsets$Mito)

}
\author{
Aaron Lun
}
