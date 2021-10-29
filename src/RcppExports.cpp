// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// build_nn_index
SEXP build_nn_index(Rcpp::NumericMatrix data);
RcppExport SEXP _scran_chan_build_nn_index(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(build_nn_index(data));
    return rcpp_result_gen;
END_RCPP
}
// cluster_kmeans
SEXP cluster_kmeans(Rcpp::NumericMatrix data, int nclusters, int nthreads);
RcppExport SEXP _scran_chan_cluster_kmeans(SEXP dataSEXP, SEXP nclustersSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type nclusters(nclustersSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(cluster_kmeans(data, nclusters, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// build_graph
SEXP build_graph(SEXP nnptr, int k, std::string method, double resolution, int nthreads);
RcppExport SEXP _scran_chan_build_graph(SEXP nnptrSEXP, SEXP kSEXP, SEXP methodSEXP, SEXP resolutionSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type nnptr(nnptrSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type resolution(resolutionSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(build_graph(nnptr, k, method, resolution, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// cluster_graph
SEXP cluster_graph(SEXP ptr);
RcppExport SEXP _scran_chan_cluster_graph(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cluster_graph(ptr));
    return rcpp_result_gen;
END_RCPP
}
// filter_cells
SEXP filter_cells(SEXP x, Rcpp::LogicalVector discard);
RcppExport SEXP _scran_chan_filter_cells(SEXP xSEXP, SEXP discardSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type discard(discardSEXP);
    rcpp_result_gen = Rcpp::wrap(filter_cells(x, discard));
    return rcpp_result_gen;
END_RCPP
}
// initialize_from_CSC
SEXP initialize_from_CSC(Rcpp::RObject x, Rcpp::IntegerVector i, Rcpp::IntegerVector p, int nrow, int ncol, bool forced);
RcppExport SEXP _scran_chan_initialize_from_CSC(SEXP xSEXP, SEXP iSEXP, SEXP pSEXP, SEXP nrowSEXP, SEXP ncolSEXP, SEXP forcedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type i(iSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< bool >::type forced(forcedSEXP);
    rcpp_result_gen = Rcpp::wrap(initialize_from_CSC(x, i, p, nrow, ncol, forced));
    return rcpp_result_gen;
END_RCPP
}
// initialize_from_CSR
SEXP initialize_from_CSR(Rcpp::RObject x, Rcpp::IntegerVector i, Rcpp::IntegerVector p, int nrow, int ncol, bool forced);
RcppExport SEXP _scran_chan_initialize_from_CSR(SEXP xSEXP, SEXP iSEXP, SEXP pSEXP, SEXP nrowSEXP, SEXP ncolSEXP, SEXP forcedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type i(iSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< bool >::type forced(forcedSEXP);
    rcpp_result_gen = Rcpp::wrap(initialize_from_CSR(x, i, p, nrow, ncol, forced));
    return rcpp_result_gen;
END_RCPP
}
// initialize_from_blocks_CSC
Rcpp::List initialize_from_blocks_CSC(int nr, int nc, bool is_integer);
RcppExport SEXP _scran_chan_initialize_from_blocks_CSC(SEXP nrSEXP, SEXP ncSEXP, SEXP is_integerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< bool >::type is_integer(is_integerSEXP);
    rcpp_result_gen = Rcpp::wrap(initialize_from_blocks_CSC(nr, nc, is_integer));
    return rcpp_result_gen;
END_RCPP
}
// initialize_from_blocks_CSR
Rcpp::List initialize_from_blocks_CSR(int nr, int nc, bool is_integer);
RcppExport SEXP _scran_chan_initialize_from_blocks_CSR(SEXP nrSEXP, SEXP ncSEXP, SEXP is_integerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< bool >::type is_integer(is_integerSEXP);
    rcpp_result_gen = Rcpp::wrap(initialize_from_blocks_CSR(nr, nc, is_integer));
    return rcpp_result_gen;
END_RCPP
}
// add_new_block_CSC
SEXP add_new_block_CSC(SEXP ptr0, Rcpp::IntegerVector rows, Rcpp::IntegerVector columns, SEXP values, int ncolumns);
RcppExport SEXP _scran_chan_add_new_block_CSC(SEXP ptr0SEXP, SEXP rowsSEXP, SEXP columnsSEXP, SEXP valuesSEXP, SEXP ncolumnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr0(ptr0SEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type columns(columnsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< int >::type ncolumns(ncolumnsSEXP);
    rcpp_result_gen = Rcpp::wrap(add_new_block_CSC(ptr0, rows, columns, values, ncolumns));
    return rcpp_result_gen;
END_RCPP
}
// add_new_block_CSR
SEXP add_new_block_CSR(SEXP ptr0, Rcpp::IntegerVector rows, Rcpp::IntegerVector columns, SEXP values, int nrows);
RcppExport SEXP _scran_chan_add_new_block_CSR(SEXP ptr0SEXP, SEXP rowsSEXP, SEXP columnsSEXP, SEXP valuesSEXP, SEXP nrowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr0(ptr0SEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type columns(columnsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< int >::type nrows(nrowsSEXP);
    rcpp_result_gen = Rcpp::wrap(add_new_block_CSR(ptr0, rows, columns, values, nrows));
    return rcpp_result_gen;
END_RCPP
}
// finalize_all_blocks_CSC
SEXP finalize_all_blocks_CSC(SEXP ptr0);
RcppExport SEXP _scran_chan_finalize_all_blocks_CSC(SEXP ptr0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr0(ptr0SEXP);
    rcpp_result_gen = Rcpp::wrap(finalize_all_blocks_CSC(ptr0));
    return rcpp_result_gen;
END_RCPP
}
// finalize_all_blocks_CSR
SEXP finalize_all_blocks_CSR(SEXP ptr0);
RcppExport SEXP _scran_chan_finalize_all_blocks_CSR(SEXP ptr0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr0(ptr0SEXP);
    rcpp_result_gen = Rcpp::wrap(finalize_all_blocks_CSR(ptr0));
    return rcpp_result_gen;
END_RCPP
}
// initialize_from_dgCMatrix
SEXP initialize_from_dgCMatrix(Rcpp::NumericVector x, Rcpp::IntegerVector i, Rcpp::IntegerVector p, int nrow, int ncol);
RcppExport SEXP _scran_chan_initialize_from_dgCMatrix(SEXP xSEXP, SEXP iSEXP, SEXP pSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type i(iSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(initialize_from_dgCMatrix(x, i, p, nrow, ncol));
    return rcpp_result_gen;
END_RCPP
}
// initialize_from_dgRMatrix
SEXP initialize_from_dgRMatrix(Rcpp::NumericVector x, Rcpp::IntegerVector i, Rcpp::IntegerVector p, int nrow, int ncol);
RcppExport SEXP _scran_chan_initialize_from_dgRMatrix(SEXP xSEXP, SEXP iSEXP, SEXP pSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type i(iSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(initialize_from_dgRMatrix(x, i, p, nrow, ncol));
    return rcpp_result_gen;
END_RCPP
}
// log_norm_counts
SEXP log_norm_counts(SEXP x, Rcpp::Nullable<Rcpp::NumericVector> size_factors);
RcppExport SEXP _scran_chan_log_norm_counts(SEXP xSEXP, SEXP size_factorsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type size_factors(size_factorsSEXP);
    rcpp_result_gen = Rcpp::wrap(log_norm_counts(x, size_factors));
    return rcpp_result_gen;
END_RCPP
}
// model_gene_var
Rcpp::List model_gene_var(SEXP x, double span, int nthreads);
RcppExport SEXP _scran_chan_model_gene_var(SEXP xSEXP, SEXP spanSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type span(spanSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(model_gene_var(x, span, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// per_cell_qc_filters
Rcpp::List per_cell_qc_filters(Rcpp::NumericVector sums, Rcpp::IntegerVector detected, Rcpp::List subsets, double nmads);
RcppExport SEXP _scran_chan_per_cell_qc_filters(SEXP sumsSEXP, SEXP detectedSEXP, SEXP subsetsSEXP, SEXP nmadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type sums(sumsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type detected(detectedSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type subsets(subsetsSEXP);
    Rcpp::traits::input_parameter< double >::type nmads(nmadsSEXP);
    rcpp_result_gen = Rcpp::wrap(per_cell_qc_filters(sums, detected, subsets, nmads));
    return rcpp_result_gen;
END_RCPP
}
// per_cell_qc_metrics
Rcpp::List per_cell_qc_metrics(SEXP x, Rcpp::List subsets, int nthreads);
RcppExport SEXP _scran_chan_per_cell_qc_metrics(SEXP xSEXP, SEXP subsetsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type subsets(subsetsSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(per_cell_qc_metrics(x, subsets, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// tatami_dim
Rcpp::IntegerVector tatami_dim(SEXP x);
RcppExport SEXP _scran_chan_tatami_dim(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tatami_dim(x));
    return rcpp_result_gen;
END_RCPP
}
// tatami_rows
Rcpp::NumericMatrix tatami_rows(SEXP x, Rcpp::IntegerVector rows, int first, int last);
RcppExport SEXP _scran_chan_tatami_rows(SEXP xSEXP, SEXP rowsSEXP, SEXP firstSEXP, SEXP lastSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type first(firstSEXP);
    Rcpp::traits::input_parameter< int >::type last(lastSEXP);
    rcpp_result_gen = Rcpp::wrap(tatami_rows(x, rows, first, last));
    return rcpp_result_gen;
END_RCPP
}
// tatami_columns
Rcpp::NumericMatrix tatami_columns(SEXP x, Rcpp::IntegerVector columns, int first, int last);
RcppExport SEXP _scran_chan_tatami_columns(SEXP xSEXP, SEXP columnsSEXP, SEXP firstSEXP, SEXP lastSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type columns(columnsSEXP);
    Rcpp::traits::input_parameter< int >::type first(firstSEXP);
    Rcpp::traits::input_parameter< int >::type last(lastSEXP);
    rcpp_result_gen = Rcpp::wrap(tatami_columns(x, columns, first, last));
    return rcpp_result_gen;
END_RCPP
}
// run_all_downstream
Rcpp::List run_all_downstream(SEXP clust_init, SEXP umap_init, SEXP tsne_init, SEXP kmeans_init, int nthreads);
RcppExport SEXP _scran_chan_run_all_downstream(SEXP clust_initSEXP, SEXP umap_initSEXP, SEXP tsne_initSEXP, SEXP kmeans_initSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type clust_init(clust_initSEXP);
    Rcpp::traits::input_parameter< SEXP >::type umap_init(umap_initSEXP);
    Rcpp::traits::input_parameter< SEXP >::type tsne_init(tsne_initSEXP);
    Rcpp::traits::input_parameter< SEXP >::type kmeans_init(kmeans_initSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(run_all_downstream(clust_init, umap_init, tsne_init, kmeans_init, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// run_pca
Rcpp::List run_pca(SEXP x, int ndim, Rcpp::Nullable<Rcpp::LogicalVector> features, int nthreads);
RcppExport SEXP _scran_chan_run_pca(SEXP xSEXP, SEXP ndimSEXP, SEXP featuresSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::LogicalVector> >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(run_pca(x, ndim, features, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// initialize_tsne
SEXP initialize_tsne(SEXP nnptr, double perplexity, int interpolate, int max_depth, int nthreads);
RcppExport SEXP _scran_chan_initialize_tsne(SEXP nnptrSEXP, SEXP perplexitySEXP, SEXP interpolateSEXP, SEXP max_depthSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type nnptr(nnptrSEXP);
    Rcpp::traits::input_parameter< double >::type perplexity(perplexitySEXP);
    Rcpp::traits::input_parameter< int >::type interpolate(interpolateSEXP);
    Rcpp::traits::input_parameter< int >::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(initialize_tsne(nnptr, perplexity, interpolate, max_depth, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// run_tsne
SEXP run_tsne(SEXP init, int nthreads);
RcppExport SEXP _scran_chan_run_tsne(SEXP initSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type init(initSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(run_tsne(init, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// initialize_umap
SEXP initialize_umap(SEXP nnptr, int num_neighbors, int nthreads);
RcppExport SEXP _scran_chan_initialize_umap(SEXP nnptrSEXP, SEXP num_neighborsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type nnptr(nnptrSEXP);
    Rcpp::traits::input_parameter< int >::type num_neighbors(num_neighborsSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(initialize_umap(nnptr, num_neighbors, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// run_umap
SEXP run_umap(SEXP init);
RcppExport SEXP _scran_chan_run_umap(SEXP initSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type init(initSEXP);
    rcpp_result_gen = Rcpp::wrap(run_umap(init));
    return rcpp_result_gen;
END_RCPP
}
// score_markers
Rcpp::List score_markers(SEXP x, Rcpp::IntegerVector groups);
RcppExport SEXP _scran_chan_score_markers(SEXP xSEXP, SEXP groupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type groups(groupsSEXP);
    rcpp_result_gen = Rcpp::wrap(score_markers(x, groups));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_scran_chan_build_nn_index", (DL_FUNC) &_scran_chan_build_nn_index, 1},
    {"_scran_chan_cluster_kmeans", (DL_FUNC) &_scran_chan_cluster_kmeans, 3},
    {"_scran_chan_build_graph", (DL_FUNC) &_scran_chan_build_graph, 5},
    {"_scran_chan_cluster_graph", (DL_FUNC) &_scran_chan_cluster_graph, 1},
    {"_scran_chan_filter_cells", (DL_FUNC) &_scran_chan_filter_cells, 2},
    {"_scran_chan_initialize_from_CSC", (DL_FUNC) &_scran_chan_initialize_from_CSC, 6},
    {"_scran_chan_initialize_from_CSR", (DL_FUNC) &_scran_chan_initialize_from_CSR, 6},
    {"_scran_chan_initialize_from_blocks_CSC", (DL_FUNC) &_scran_chan_initialize_from_blocks_CSC, 3},
    {"_scran_chan_initialize_from_blocks_CSR", (DL_FUNC) &_scran_chan_initialize_from_blocks_CSR, 3},
    {"_scran_chan_add_new_block_CSC", (DL_FUNC) &_scran_chan_add_new_block_CSC, 5},
    {"_scran_chan_add_new_block_CSR", (DL_FUNC) &_scran_chan_add_new_block_CSR, 5},
    {"_scran_chan_finalize_all_blocks_CSC", (DL_FUNC) &_scran_chan_finalize_all_blocks_CSC, 1},
    {"_scran_chan_finalize_all_blocks_CSR", (DL_FUNC) &_scran_chan_finalize_all_blocks_CSR, 1},
    {"_scran_chan_initialize_from_dgCMatrix", (DL_FUNC) &_scran_chan_initialize_from_dgCMatrix, 5},
    {"_scran_chan_initialize_from_dgRMatrix", (DL_FUNC) &_scran_chan_initialize_from_dgRMatrix, 5},
    {"_scran_chan_log_norm_counts", (DL_FUNC) &_scran_chan_log_norm_counts, 2},
    {"_scran_chan_model_gene_var", (DL_FUNC) &_scran_chan_model_gene_var, 3},
    {"_scran_chan_per_cell_qc_filters", (DL_FUNC) &_scran_chan_per_cell_qc_filters, 4},
    {"_scran_chan_per_cell_qc_metrics", (DL_FUNC) &_scran_chan_per_cell_qc_metrics, 3},
    {"_scran_chan_tatami_dim", (DL_FUNC) &_scran_chan_tatami_dim, 1},
    {"_scran_chan_tatami_rows", (DL_FUNC) &_scran_chan_tatami_rows, 4},
    {"_scran_chan_tatami_columns", (DL_FUNC) &_scran_chan_tatami_columns, 4},
    {"_scran_chan_run_all_downstream", (DL_FUNC) &_scran_chan_run_all_downstream, 5},
    {"_scran_chan_run_pca", (DL_FUNC) &_scran_chan_run_pca, 4},
    {"_scran_chan_initialize_tsne", (DL_FUNC) &_scran_chan_initialize_tsne, 5},
    {"_scran_chan_run_tsne", (DL_FUNC) &_scran_chan_run_tsne, 2},
    {"_scran_chan_initialize_umap", (DL_FUNC) &_scran_chan_initialize_umap, 3},
    {"_scran_chan_run_umap", (DL_FUNC) &_scran_chan_run_umap, 1},
    {"_scran_chan_score_markers", (DL_FUNC) &_scran_chan_score_markers, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_scran_chan(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
