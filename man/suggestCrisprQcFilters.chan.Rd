% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/suggestCrisprQcFilters.R
\name{suggestCrisprQcFilters.chan}
\alias{suggestCrisprQcFilters.chan}
\title{Suggest filters for CRISPR QC metrics}
\usage{
suggestCrisprQcFilters.chan(sums, max.proportion, batch = NULL, nmads = 3)
}
\arguments{
\item{sums}{Numeric vector containing the sum of tag counts for each cell.}

\item{max.proportion}{Numeric vector containing the proportion of counts assigned to the most abundant tag within each cell.}

\item{batch}{Vector or factor of length equal to the number of cells, specifying the batch of origin for each cell.
Alternatively \code{NULL} if all cells belong to the same batch.}

\item{nmads}{Numeric scalar specifying the number of median absolute deviations to be used to detect outliers.}
}
\value{
A list containing:
\itemize{
    \item \code{filter}, a logical vector of length equal to the number of cells.
    True values indicate that a cell was considered to be low quality (for any reason) and removed.
    \item \code{thresholds}, a list containing:
    \itemize{
        \item \code{max.count}, a numeric vector containing the minimum threshold on the maximum count within each cell.
    }
    Each numeric vector is of length equal to the number of blocks (default 1 if \code{block=NULL}).
}
}
\description{
Suggest appropriate filters to be applied on the per-cell QC metrics for CRISPR data.
}
\examples{
# Mocking a matrix:
library(Matrix)
x <- round(abs(rsparsematrix(20, 100, 0.1) * 100))

# Running the analysis:
y <- initializeSparseMatrix(x)
qc <- perCellCrisprQcMetrics.chan(y)
filters <- suggestCrisprQcFilters.chan(qc$sums, qc$max.proportion)
str(filters)

}
\author{
Aaron Lun
}
