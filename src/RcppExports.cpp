// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// aggregate_across_cells
SEXP aggregate_across_cells(SEXP x, Rcpp::List groupings, int nthreads);
RcppExport SEXP _scran_chan_aggregate_across_cells(SEXP xSEXP, SEXP groupingsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type groupings(groupingsSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(aggregate_across_cells(x, groupings, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// build_nn_index
SEXP build_nn_index(Rcpp::NumericMatrix data, bool approximate);
RcppExport SEXP _scran_chan_build_nn_index(SEXP dataSEXP, SEXP approximateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< bool >::type approximate(approximateSEXP);
    rcpp_result_gen = Rcpp::wrap(build_nn_index(data, approximate));
    return rcpp_result_gen;
END_RCPP
}
// find_nearest_neighbors
Rcpp::List find_nearest_neighbors(SEXP index, int k, int nthreads);
RcppExport SEXP _scran_chan_find_nearest_neighbors(SEXP indexSEXP, SEXP kSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type index(indexSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(find_nearest_neighbors(index, k, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// query_nearest_neighbors
Rcpp::List query_nearest_neighbors(Rcpp::NumericMatrix query, SEXP index, int k, int nthreads);
RcppExport SEXP _scran_chan_query_nearest_neighbors(SEXP querySEXP, SEXP indexSEXP, SEXP kSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type query(querySEXP);
    Rcpp::traits::input_parameter< SEXP >::type index(indexSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(query_nearest_neighbors(query, index, k, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// find_nearest_neighbor_indices
Rcpp::List find_nearest_neighbor_indices(SEXP index, int k, int nthreads);
RcppExport SEXP _scran_chan_find_nearest_neighbor_indices(SEXP indexSEXP, SEXP kSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type index(indexSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(find_nearest_neighbor_indices(index, k, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// cluster_kmeans
SEXP cluster_kmeans(Rcpp::NumericMatrix data, int nclusters, std::string init_method, int seed, int nthreads);
RcppExport SEXP _scran_chan_cluster_kmeans(SEXP dataSEXP, SEXP nclustersSEXP, SEXP init_methodSEXP, SEXP seedSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type nclusters(nclustersSEXP);
    Rcpp::traits::input_parameter< std::string >::type init_method(init_methodSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(cluster_kmeans(data, nclusters, init_method, seed, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// cluster_snn_graph
SEXP cluster_snn_graph(Rcpp::IntegerMatrix nnidx, std::string weight_scheme, std::string method, double resolution, int steps, bool use_cpm, int seed, int nthreads);
RcppExport SEXP _scran_chan_cluster_snn_graph(SEXP nnidxSEXP, SEXP weight_schemeSEXP, SEXP methodSEXP, SEXP resolutionSEXP, SEXP stepsSEXP, SEXP use_cpmSEXP, SEXP seedSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type nnidx(nnidxSEXP);
    Rcpp::traits::input_parameter< std::string >::type weight_scheme(weight_schemeSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type resolution(resolutionSEXP);
    Rcpp::traits::input_parameter< int >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< bool >::type use_cpm(use_cpmSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(cluster_snn_graph(nnidx, weight_scheme, method, resolution, steps, use_cpm, seed, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// combine_matrix
SEXP combine_matrix(Rcpp::List x, bool byrow);
RcppExport SEXP _scran_chan_combine_matrix(SEXP xSEXP, SEXP byrowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type byrow(byrowSEXP);
    rcpp_result_gen = Rcpp::wrap(combine_matrix(x, byrow));
    return rcpp_result_gen;
END_RCPP
}
// downsample_by_neighbors
SEXP downsample_by_neighbors(Rcpp::NumericMatrix data, int k, bool approximate, int nthreads);
RcppExport SEXP _scran_chan_downsample_by_neighbors(SEXP dataSEXP, SEXP kSEXP, SEXP approximateSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type approximate(approximateSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(downsample_by_neighbors(data, k, approximate, nthreads));
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
// initialize_from_hdf5
SEXP initialize_from_hdf5(std::string file, std::string name, size_t nrow, size_t ncol, bool byrow, bool forced);
RcppExport SEXP _scran_chan_initialize_from_hdf5(SEXP fileSEXP, SEXP nameSEXP, SEXP nrowSEXP, SEXP ncolSEXP, SEXP byrowSEXP, SEXP forcedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< size_t >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< size_t >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< bool >::type byrow(byrowSEXP);
    Rcpp::traits::input_parameter< bool >::type forced(forcedSEXP);
    rcpp_result_gen = Rcpp::wrap(initialize_from_hdf5(file, name, nrow, ncol, byrow, forced));
    return rcpp_result_gen;
END_RCPP
}
// initialize_from_memory
SEXP initialize_from_memory(Rcpp::RObject x, Rcpp::RObject i, Rcpp::RObject p, int nrow, int ncol, bool no_copy, bool byrow, bool forced);
RcppExport SEXP _scran_chan_initialize_from_memory(SEXP xSEXP, SEXP iSEXP, SEXP pSEXP, SEXP nrowSEXP, SEXP ncolSEXP, SEXP no_copySEXP, SEXP byrowSEXP, SEXP forcedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type i(iSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< bool >::type no_copy(no_copySEXP);
    Rcpp::traits::input_parameter< bool >::type byrow(byrowSEXP);
    Rcpp::traits::input_parameter< bool >::type forced(forcedSEXP);
    rcpp_result_gen = Rcpp::wrap(initialize_from_memory(x, i, p, nrow, ncol, no_copy, byrow, forced));
    return rcpp_result_gen;
END_RCPP
}
// log_norm_counts
SEXP log_norm_counts(SEXP x, Rcpp::Nullable<Rcpp::NumericVector> size_factors, Rcpp::Nullable<Rcpp::IntegerVector> batch, std::string batch_mode, int nthreads);
RcppExport SEXP _scran_chan_log_norm_counts(SEXP xSEXP, SEXP size_factorsSEXP, SEXP batchSEXP, SEXP batch_modeSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type size_factors(size_factorsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type batch(batchSEXP);
    Rcpp::traits::input_parameter< std::string >::type batch_mode(batch_modeSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(log_norm_counts(x, size_factors, batch, batch_mode, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// mnn_correct
Rcpp::List mnn_correct(Rcpp::NumericMatrix x, Rcpp::IntegerVector batch, int k, double nmads, int nthreads, int mass_cap, Rcpp::Nullable<Rcpp::IntegerVector> order, std::string ref_policy, bool approximate);
RcppExport SEXP _scran_chan_mnn_correct(SEXP xSEXP, SEXP batchSEXP, SEXP kSEXP, SEXP nmadsSEXP, SEXP nthreadsSEXP, SEXP mass_capSEXP, SEXP orderSEXP, SEXP ref_policySEXP, SEXP approximateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type batch(batchSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type nmads(nmadsSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    Rcpp::traits::input_parameter< int >::type mass_cap(mass_capSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type order(orderSEXP);
    Rcpp::traits::input_parameter< std::string >::type ref_policy(ref_policySEXP);
    Rcpp::traits::input_parameter< bool >::type approximate(approximateSEXP);
    rcpp_result_gen = Rcpp::wrap(mnn_correct(x, batch, k, nmads, nthreads, mass_cap, order, ref_policy, approximate));
    return rcpp_result_gen;
END_RCPP
}
// model_gene_var
Rcpp::List model_gene_var(SEXP x, Rcpp::Nullable<Rcpp::IntegerVector> batch, double span, int nthreads);
RcppExport SEXP _scran_chan_model_gene_var(SEXP xSEXP, SEXP batchSEXP, SEXP spanSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type batch(batchSEXP);
    Rcpp::traits::input_parameter< double >::type span(spanSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(model_gene_var(x, batch, span, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// per_cell_adt_qc_metrics
Rcpp::List per_cell_adt_qc_metrics(SEXP x, Rcpp::List subsets, int nthreads);
RcppExport SEXP _scran_chan_per_cell_adt_qc_metrics(SEXP xSEXP, SEXP subsetsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type subsets(subsetsSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(per_cell_adt_qc_metrics(x, subsets, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// per_cell_crispr_qc_metrics
Rcpp::List per_cell_crispr_qc_metrics(SEXP x, int nthreads);
RcppExport SEXP _scran_chan_per_cell_crispr_qc_metrics(SEXP xSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(per_cell_crispr_qc_metrics(x, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// per_cell_rna_qc_metrics
Rcpp::List per_cell_rna_qc_metrics(SEXP x, Rcpp::List subsets, int nthreads);
RcppExport SEXP _scran_chan_per_cell_rna_qc_metrics(SEXP xSEXP, SEXP subsetsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type subsets(subsetsSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(per_cell_rna_qc_metrics(x, subsets, nthreads));
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
// run_blocked_pca
Rcpp::List run_blocked_pca(SEXP x, int ndim, Rcpp::IntegerVector batch, Rcpp::Nullable<Rcpp::LogicalVector> features, bool rotation, int nthreads);
RcppExport SEXP _scran_chan_run_blocked_pca(SEXP xSEXP, SEXP ndimSEXP, SEXP batchSEXP, SEXP featuresSEXP, SEXP rotationSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type batch(batchSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::LogicalVector> >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< bool >::type rotation(rotationSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(run_blocked_pca(x, ndim, batch, features, rotation, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// run_multibatch_pca
Rcpp::List run_multibatch_pca(SEXP x, int ndim, Rcpp::IntegerVector batch, Rcpp::Nullable<Rcpp::LogicalVector> features, bool rotation, int nthreads);
RcppExport SEXP _scran_chan_run_multibatch_pca(SEXP xSEXP, SEXP ndimSEXP, SEXP batchSEXP, SEXP featuresSEXP, SEXP rotationSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type batch(batchSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::LogicalVector> >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< bool >::type rotation(rotationSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(run_multibatch_pca(x, ndim, batch, features, rotation, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// run_pca
Rcpp::List run_pca(SEXP x, int ndim, Rcpp::Nullable<Rcpp::LogicalVector> features, bool rotation, int nthreads);
RcppExport SEXP _scran_chan_run_pca(SEXP xSEXP, SEXP ndimSEXP, SEXP featuresSEXP, SEXP rotationSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::LogicalVector> >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< bool >::type rotation(rotationSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(run_pca(x, ndim, features, rotation, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// run_tsne
SEXP run_tsne(Rcpp::IntegerMatrix nnidx, Rcpp::NumericMatrix nndist, double perplexity, int interpolate, int max_depth, int max_iter, int seed, int nthreads);
RcppExport SEXP _scran_chan_run_tsne(SEXP nnidxSEXP, SEXP nndistSEXP, SEXP perplexitySEXP, SEXP interpolateSEXP, SEXP max_depthSEXP, SEXP max_iterSEXP, SEXP seedSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type nnidx(nnidxSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type nndist(nndistSEXP);
    Rcpp::traits::input_parameter< double >::type perplexity(perplexitySEXP);
    Rcpp::traits::input_parameter< int >::type interpolate(interpolateSEXP);
    Rcpp::traits::input_parameter< int >::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(run_tsne(nnidx, nndist, perplexity, interpolate, max_depth, max_iter, seed, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// perplexity_to_neighbors
int perplexity_to_neighbors(double p);
RcppExport SEXP _scran_chan_perplexity_to_neighbors(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(perplexity_to_neighbors(p));
    return rcpp_result_gen;
END_RCPP
}
// run_umap
SEXP run_umap(Rcpp::IntegerMatrix nnidx, Rcpp::NumericMatrix nndist, double min_dist, int seed, int num_epochs, int nthreads);
RcppExport SEXP _scran_chan_run_umap(SEXP nnidxSEXP, SEXP nndistSEXP, SEXP min_distSEXP, SEXP seedSEXP, SEXP num_epochsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type nnidx(nnidxSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type nndist(nndistSEXP);
    Rcpp::traits::input_parameter< double >::type min_dist(min_distSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type num_epochs(num_epochsSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(run_umap(nnidx, nndist, min_dist, seed, num_epochs, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// scale_by_neighbors
Rcpp::NumericVector scale_by_neighbors(Rcpp::List matrices, int k, bool approximate, int nthreads);
RcppExport SEXP _scran_chan_scale_by_neighbors(SEXP matricesSEXP, SEXP kSEXP, SEXP approximateSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type matrices(matricesSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type approximate(approximateSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(scale_by_neighbors(matrices, k, approximate, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// score_markers
Rcpp::List score_markers(SEXP x, Rcpp::IntegerVector groups, Rcpp::Nullable<Rcpp::IntegerVector> batch, bool simple_means_only, double lfc, int nthreads);
RcppExport SEXP _scran_chan_score_markers(SEXP xSEXP, SEXP groupsSEXP, SEXP batchSEXP, SEXP simple_means_onlySEXP, SEXP lfcSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type batch(batchSEXP);
    Rcpp::traits::input_parameter< bool >::type simple_means_only(simple_means_onlySEXP);
    Rcpp::traits::input_parameter< double >::type lfc(lfcSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(score_markers(x, groups, batch, simple_means_only, lfc, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// subset_matrix
SEXP subset_matrix(SEXP x, Rcpp::RObject i, Rcpp::RObject j);
RcppExport SEXP _scran_chan_subset_matrix(SEXP xSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type i(iSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(subset_matrix(x, i, j));
    return rcpp_result_gen;
END_RCPP
}
// suggest_adt_qc_filters
Rcpp::List suggest_adt_qc_filters(Rcpp::NumericVector sums, Rcpp::IntegerVector detected, Rcpp::List subsets, Rcpp::Nullable<Rcpp::IntegerVector> batch, double nmads);
RcppExport SEXP _scran_chan_suggest_adt_qc_filters(SEXP sumsSEXP, SEXP detectedSEXP, SEXP subsetsSEXP, SEXP batchSEXP, SEXP nmadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type sums(sumsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type detected(detectedSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type subsets(subsetsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type batch(batchSEXP);
    Rcpp::traits::input_parameter< double >::type nmads(nmadsSEXP);
    rcpp_result_gen = Rcpp::wrap(suggest_adt_qc_filters(sums, detected, subsets, batch, nmads));
    return rcpp_result_gen;
END_RCPP
}
// suggest_crispr_qc_filters
Rcpp::List suggest_crispr_qc_filters(Rcpp::NumericVector sums, Rcpp::NumericVector max_prop, Rcpp::Nullable<Rcpp::IntegerVector> batch, double nmads);
RcppExport SEXP _scran_chan_suggest_crispr_qc_filters(SEXP sumsSEXP, SEXP max_propSEXP, SEXP batchSEXP, SEXP nmadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type sums(sumsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type max_prop(max_propSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type batch(batchSEXP);
    Rcpp::traits::input_parameter< double >::type nmads(nmadsSEXP);
    rcpp_result_gen = Rcpp::wrap(suggest_crispr_qc_filters(sums, max_prop, batch, nmads));
    return rcpp_result_gen;
END_RCPP
}
// suggest_rna_qc_filters
Rcpp::List suggest_rna_qc_filters(Rcpp::NumericVector sums, Rcpp::IntegerVector detected, Rcpp::List subsets, Rcpp::Nullable<Rcpp::IntegerVector> batch, double nmads);
RcppExport SEXP _scran_chan_suggest_rna_qc_filters(SEXP sumsSEXP, SEXP detectedSEXP, SEXP subsetsSEXP, SEXP batchSEXP, SEXP nmadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type sums(sumsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type detected(detectedSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type subsets(subsetsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type batch(batchSEXP);
    Rcpp::traits::input_parameter< double >::type nmads(nmadsSEXP);
    rcpp_result_gen = Rcpp::wrap(suggest_rna_qc_filters(sums, detected, subsets, batch, nmads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_scran_chan_aggregate_across_cells", (DL_FUNC) &_scran_chan_aggregate_across_cells, 3},
    {"_scran_chan_build_nn_index", (DL_FUNC) &_scran_chan_build_nn_index, 2},
    {"_scran_chan_find_nearest_neighbors", (DL_FUNC) &_scran_chan_find_nearest_neighbors, 3},
    {"_scran_chan_query_nearest_neighbors", (DL_FUNC) &_scran_chan_query_nearest_neighbors, 4},
    {"_scran_chan_find_nearest_neighbor_indices", (DL_FUNC) &_scran_chan_find_nearest_neighbor_indices, 3},
    {"_scran_chan_cluster_kmeans", (DL_FUNC) &_scran_chan_cluster_kmeans, 5},
    {"_scran_chan_cluster_snn_graph", (DL_FUNC) &_scran_chan_cluster_snn_graph, 8},
    {"_scran_chan_combine_matrix", (DL_FUNC) &_scran_chan_combine_matrix, 2},
    {"_scran_chan_downsample_by_neighbors", (DL_FUNC) &_scran_chan_downsample_by_neighbors, 4},
    {"_scran_chan_filter_cells", (DL_FUNC) &_scran_chan_filter_cells, 2},
    {"_scran_chan_initialize_from_blocks_CSC", (DL_FUNC) &_scran_chan_initialize_from_blocks_CSC, 3},
    {"_scran_chan_initialize_from_blocks_CSR", (DL_FUNC) &_scran_chan_initialize_from_blocks_CSR, 3},
    {"_scran_chan_add_new_block_CSC", (DL_FUNC) &_scran_chan_add_new_block_CSC, 5},
    {"_scran_chan_add_new_block_CSR", (DL_FUNC) &_scran_chan_add_new_block_CSR, 5},
    {"_scran_chan_finalize_all_blocks_CSC", (DL_FUNC) &_scran_chan_finalize_all_blocks_CSC, 1},
    {"_scran_chan_finalize_all_blocks_CSR", (DL_FUNC) &_scran_chan_finalize_all_blocks_CSR, 1},
    {"_scran_chan_initialize_from_hdf5", (DL_FUNC) &_scran_chan_initialize_from_hdf5, 6},
    {"_scran_chan_initialize_from_memory", (DL_FUNC) &_scran_chan_initialize_from_memory, 8},
    {"_scran_chan_log_norm_counts", (DL_FUNC) &_scran_chan_log_norm_counts, 5},
    {"_scran_chan_mnn_correct", (DL_FUNC) &_scran_chan_mnn_correct, 9},
    {"_scran_chan_model_gene_var", (DL_FUNC) &_scran_chan_model_gene_var, 4},
    {"_scran_chan_per_cell_adt_qc_metrics", (DL_FUNC) &_scran_chan_per_cell_adt_qc_metrics, 3},
    {"_scran_chan_per_cell_crispr_qc_metrics", (DL_FUNC) &_scran_chan_per_cell_crispr_qc_metrics, 2},
    {"_scran_chan_per_cell_rna_qc_metrics", (DL_FUNC) &_scran_chan_per_cell_rna_qc_metrics, 3},
    {"_scran_chan_tatami_dim", (DL_FUNC) &_scran_chan_tatami_dim, 1},
    {"_scran_chan_tatami_rows", (DL_FUNC) &_scran_chan_tatami_rows, 4},
    {"_scran_chan_tatami_columns", (DL_FUNC) &_scran_chan_tatami_columns, 4},
    {"_scran_chan_run_blocked_pca", (DL_FUNC) &_scran_chan_run_blocked_pca, 6},
    {"_scran_chan_run_multibatch_pca", (DL_FUNC) &_scran_chan_run_multibatch_pca, 6},
    {"_scran_chan_run_pca", (DL_FUNC) &_scran_chan_run_pca, 5},
    {"_scran_chan_run_tsne", (DL_FUNC) &_scran_chan_run_tsne, 8},
    {"_scran_chan_perplexity_to_neighbors", (DL_FUNC) &_scran_chan_perplexity_to_neighbors, 1},
    {"_scran_chan_run_umap", (DL_FUNC) &_scran_chan_run_umap, 6},
    {"_scran_chan_scale_by_neighbors", (DL_FUNC) &_scran_chan_scale_by_neighbors, 4},
    {"_scran_chan_score_markers", (DL_FUNC) &_scran_chan_score_markers, 6},
    {"_scran_chan_subset_matrix", (DL_FUNC) &_scran_chan_subset_matrix, 3},
    {"_scran_chan_suggest_adt_qc_filters", (DL_FUNC) &_scran_chan_suggest_adt_qc_filters, 5},
    {"_scran_chan_suggest_crispr_qc_filters", (DL_FUNC) &_scran_chan_suggest_crispr_qc_filters, 4},
    {"_scran_chan_suggest_rna_qc_filters", (DL_FUNC) &_scran_chan_suggest_rna_qc_filters, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_scran_chan(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
