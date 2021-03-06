// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// nnIndex
std::vector<double> nnIndex(const Rcpp::DataFrame& P, const Rcpp::DataFrame& Q);
RcppExport SEXP Rcppnanoflann_nnIndex(SEXP PSEXP, SEXP QSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type P(PSEXP );
        Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type Q(QSEXP );
        std::vector<double> __result = nnIndex(P, Q);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
