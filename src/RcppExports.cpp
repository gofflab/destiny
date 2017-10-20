// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// censoring_impl
Eigen::SparseMatrix<double> censoring_impl(const NumericMatrix data, const NumericVector sigmas, const Eigen::SparseMatrix<double> dists, const SEXP thr_or_null, const SEXP uncertain_or_null, const SEXP missing_or_null, const Function callback);
RcppExport SEXP _destiny_censoring_impl(SEXP dataSEXP, SEXP sigmasSEXP, SEXP distsSEXP, SEXP thr_or_nullSEXP, SEXP uncertain_or_nullSEXP, SEXP missing_or_nullSEXP, SEXP callbackSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type sigmas(sigmasSEXP);
    Rcpp::traits::input_parameter< const Eigen::SparseMatrix<double> >::type dists(distsSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type thr_or_null(thr_or_nullSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type uncertain_or_null(uncertain_or_nullSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type missing_or_null(missing_or_nullSEXP);
    Rcpp::traits::input_parameter< const Function >::type callback(callbackSEXP);
    rcpp_result_gen = Rcpp::wrap(censoring_impl(data, sigmas, dists, thr_or_null, uncertain_or_null, missing_or_null, callback));
    return rcpp_result_gen;
END_RCPP
}
// predict_censoring_impl
NumericMatrix predict_censoring_impl(const NumericMatrix data, const NumericMatrix data2, const double thr, const NumericVector uncertain, const NumericVector missing, const double sigma);
RcppExport SEXP _destiny_predict_censoring_impl(SEXP dataSEXP, SEXP data2SEXP, SEXP thrSEXP, SEXP uncertainSEXP, SEXP missingSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type data2(data2SEXP);
    Rcpp::traits::input_parameter< const double >::type thr(thrSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type uncertain(uncertainSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type missing(missingSEXP);
    Rcpp::traits::input_parameter< const double >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_censoring_impl(data, data2, thr, uncertain, missing, sigma));
    return rcpp_result_gen;
END_RCPP
}
// knn
List knn(NumericMatrix imputed_data, size_t k, std::string distance);
RcppExport SEXP _destiny_knn(SEXP imputed_dataSEXP, SEXP kSEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type imputed_data(imputed_dataSEXP);
    Rcpp::traits::input_parameter< size_t >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::string >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(knn(imputed_data, k, distance));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_destiny_censoring_impl", (DL_FUNC) &_destiny_censoring_impl, 7},
    {"_destiny_predict_censoring_impl", (DL_FUNC) &_destiny_predict_censoring_impl, 6},
    {"_destiny_knn", (DL_FUNC) &_destiny_knn, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_destiny(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
