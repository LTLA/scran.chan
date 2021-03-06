#include "config.h"

#include "Rcpp.h"

#include "scran/dimensionality_reduction/BlockedPCA.hpp"

#include "tatamize.h"
#include "ResolvedFeatures.h"
#include "format_pca_output.h"

#ifdef _OPENMP
#include "omp.h"
#endif

//[[Rcpp::export(rng=false)]]
Rcpp::List run_blocked_pca(SEXP x, int ndim, Rcpp::IntegerVector batch, Rcpp::Nullable<Rcpp::LogicalVector> features, bool rotation, int nthreads) {
#ifdef _openmp
    omp_set_num_threads(nthreads);
#endif

    scran::BlockedPCA pcs;
    pcs.set_rank(ndim);

    ResolvedFeatures feat(features);
    const int* fptr = feat.ptr;

    auto mat = extract_NumericMatrix(x);
    auto res = pcs.run(mat, static_cast<const int*>(batch.begin()), fptr);

    return format_pca_output(mat, res, rotation);
}
