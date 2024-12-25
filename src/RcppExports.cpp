// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// new_model
SEXP new_model();
RcppExport SEXP _highs_new_model() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(new_model());
    return rcpp_result_gen;
END_RCPP
}
// model_set_ncol
SEXP model_set_ncol(SEXP mpt, int32_t ncol);
RcppExport SEXP _highs_model_set_ncol(SEXP mptSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    Rcpp::traits::input_parameter< int32_t >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(model_set_ncol(mpt, ncol));
    return rcpp_result_gen;
END_RCPP
}
// model_set_nrow
SEXP model_set_nrow(SEXP mpt, int32_t nrow);
RcppExport SEXP _highs_model_set_nrow(SEXP mptSEXP, SEXP nrowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    Rcpp::traits::input_parameter< int32_t >::type nrow(nrowSEXP);
    rcpp_result_gen = Rcpp::wrap(model_set_nrow(mpt, nrow));
    return rcpp_result_gen;
END_RCPP
}
// model_set_sense
SEXP model_set_sense(SEXP mpt, bool maximum);
RcppExport SEXP _highs_model_set_sense(SEXP mptSEXP, SEXP maximumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    Rcpp::traits::input_parameter< bool >::type maximum(maximumSEXP);
    rcpp_result_gen = Rcpp::wrap(model_set_sense(mpt, maximum));
    return rcpp_result_gen;
END_RCPP
}
// model_set_offset
SEXP model_set_offset(SEXP mpt, double_t offset);
RcppExport SEXP _highs_model_set_offset(SEXP mptSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    Rcpp::traits::input_parameter< double_t >::type offset(offsetSEXP);
    rcpp_result_gen = Rcpp::wrap(model_set_offset(mpt, offset));
    return rcpp_result_gen;
END_RCPP
}
// model_set_objective
SEXP model_set_objective(SEXP mpt, std::vector<double> objective);
RcppExport SEXP _highs_model_set_objective(SEXP mptSEXP, SEXP objectiveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type objective(objectiveSEXP);
    rcpp_result_gen = Rcpp::wrap(model_set_objective(mpt, objective));
    return rcpp_result_gen;
END_RCPP
}
// model_set_lower
SEXP model_set_lower(SEXP mpt, std::vector<double> lower);
RcppExport SEXP _highs_model_set_lower(SEXP mptSEXP, SEXP lowerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type lower(lowerSEXP);
    rcpp_result_gen = Rcpp::wrap(model_set_lower(mpt, lower));
    return rcpp_result_gen;
END_RCPP
}
// model_set_upper
SEXP model_set_upper(SEXP mpt, std::vector<double> upper);
RcppExport SEXP _highs_model_set_upper(SEXP mptSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(model_set_upper(mpt, upper));
    return rcpp_result_gen;
END_RCPP
}
// model_set_constraint_matrix_
SEXP model_set_constraint_matrix_(SEXP mpt, std::string format, std::vector<int32_t> start, std::vector<int32_t> index, std::vector<double> value);
RcppExport SEXP _highs_model_set_constraint_matrix_(SEXP mptSEXP, SEXP formatSEXP, SEXP startSEXP, SEXP indexSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    Rcpp::traits::input_parameter< std::string >::type format(formatSEXP);
    Rcpp::traits::input_parameter< std::vector<int32_t> >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::vector<int32_t> >::type index(indexSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(model_set_constraint_matrix_(mpt, format, start, index, value));
    return rcpp_result_gen;
END_RCPP
}
// model_set_lhs
SEXP model_set_lhs(SEXP mpt, std::vector<double> lower);
RcppExport SEXP _highs_model_set_lhs(SEXP mptSEXP, SEXP lowerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type lower(lowerSEXP);
    rcpp_result_gen = Rcpp::wrap(model_set_lhs(mpt, lower));
    return rcpp_result_gen;
END_RCPP
}
// model_set_rhs
SEXP model_set_rhs(SEXP mpt, std::vector<double> upper);
RcppExport SEXP _highs_model_set_rhs(SEXP mptSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(model_set_rhs(mpt, upper));
    return rcpp_result_gen;
END_RCPP
}
// model_set_hessian_
SEXP model_set_hessian_(SEXP mpt, std::string format, int32_t dim, std::vector<int32_t> start, std::vector<int32_t> index, std::vector<double> value);
RcppExport SEXP _highs_model_set_hessian_(SEXP mptSEXP, SEXP formatSEXP, SEXP dimSEXP, SEXP startSEXP, SEXP indexSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    Rcpp::traits::input_parameter< std::string >::type format(formatSEXP);
    Rcpp::traits::input_parameter< int32_t >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< std::vector<int32_t> >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::vector<int32_t> >::type index(indexSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(model_set_hessian_(mpt, format, dim, start, index, value));
    return rcpp_result_gen;
END_RCPP
}
// model_set_vartype
SEXP model_set_vartype(SEXP mpt, std::vector<int32_t> type);
RcppExport SEXP _highs_model_set_vartype(SEXP mptSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    Rcpp::traits::input_parameter< std::vector<int32_t> >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(model_set_vartype(mpt, type));
    return rcpp_result_gen;
END_RCPP
}
// model_get_nvars
int32_t model_get_nvars(SEXP mpt);
RcppExport SEXP _highs_model_get_nvars(SEXP mptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    rcpp_result_gen = Rcpp::wrap(model_get_nvars(mpt));
    return rcpp_result_gen;
END_RCPP
}
// model_get_ncons
int32_t model_get_ncons(SEXP mpt);
RcppExport SEXP _highs_model_get_ncons(SEXP mptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    rcpp_result_gen = Rcpp::wrap(model_get_ncons(mpt));
    return rcpp_result_gen;
END_RCPP
}
// new_solver
SEXP new_solver(SEXP mpt);
RcppExport SEXP _highs_new_solver(SEXP mptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type mpt(mptSEXP);
    rcpp_result_gen = Rcpp::wrap(new_solver(mpt));
    return rcpp_result_gen;
END_RCPP
}
// highs_pass_model
SEXP highs_pass_model(SEXP hi, const int32_t num_col, const int32_t num_row, const int32_t num_nz, const int32_t a_format, const int32_t sense, const double_t offset, NumericVector col_cost, NumericVector col_lower, NumericVector col_upper, NumericVector row_lower, NumericVector row_upper, IntegerVector a_start, IntegerVector a_index, NumericVector a_value, IntegerVector integrality);
RcppExport SEXP _highs_highs_pass_model(SEXP hiSEXP, SEXP num_colSEXP, SEXP num_rowSEXP, SEXP num_nzSEXP, SEXP a_formatSEXP, SEXP senseSEXP, SEXP offsetSEXP, SEXP col_costSEXP, SEXP col_lowerSEXP, SEXP col_upperSEXP, SEXP row_lowerSEXP, SEXP row_upperSEXP, SEXP a_startSEXP, SEXP a_indexSEXP, SEXP a_valueSEXP, SEXP integralitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< const int32_t >::type num_col(num_colSEXP);
    Rcpp::traits::input_parameter< const int32_t >::type num_row(num_rowSEXP);
    Rcpp::traits::input_parameter< const int32_t >::type num_nz(num_nzSEXP);
    Rcpp::traits::input_parameter< const int32_t >::type a_format(a_formatSEXP);
    Rcpp::traits::input_parameter< const int32_t >::type sense(senseSEXP);
    Rcpp::traits::input_parameter< const double_t >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type col_cost(col_costSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type col_lower(col_lowerSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type col_upper(col_upperSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type row_lower(row_lowerSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type row_upper(row_upperSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type a_start(a_startSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type a_index(a_indexSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a_value(a_valueSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type integrality(integralitySEXP);
    rcpp_result_gen = Rcpp::wrap(highs_pass_model(hi, num_col, num_row, num_nz, a_format, sense, offset, col_cost, col_lower, col_upper, row_lower, row_upper, a_start, a_index, a_value, integrality));
    return rcpp_result_gen;
END_RCPP
}
// solver_pass_hessian
SEXP solver_pass_hessian();
RcppExport SEXP _highs_solver_pass_hessian() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(solver_pass_hessian());
    return rcpp_result_gen;
END_RCPP
}
// solver_pass_constraints
SEXP solver_pass_constraints();
RcppExport SEXP _highs_solver_pass_constraints() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(solver_pass_constraints());
    return rcpp_result_gen;
END_RCPP
}
// solver_get_sense
int32_t solver_get_sense(SEXP hi);
RcppExport SEXP _highs_solver_get_sense(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_sense(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_set_sense
int32_t solver_set_sense(SEXP hi, bool maximum);
RcppExport SEXP _highs_solver_set_sense(SEXP hiSEXP, SEXP maximumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< bool >::type maximum(maximumSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_set_sense(hi, maximum));
    return rcpp_result_gen;
END_RCPP
}
// solver_set_offset
int32_t solver_set_offset(SEXP hi, const double ext_offset);
RcppExport SEXP _highs_solver_set_offset(SEXP hiSEXP, SEXP ext_offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< const double >::type ext_offset(ext_offsetSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_set_offset(hi, ext_offset));
    return rcpp_result_gen;
END_RCPP
}
// solver_set_integrality
int32_t solver_set_integrality(SEXP hi, std::vector<int32_t> index, std::vector<int32_t> type);
RcppExport SEXP _highs_solver_set_integrality(SEXP hiSEXP, SEXP indexSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< std::vector<int32_t> >::type index(indexSEXP);
    Rcpp::traits::input_parameter< std::vector<int32_t> >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_set_integrality(hi, index, type));
    return rcpp_result_gen;
END_RCPP
}
// solver_set_objective
int32_t solver_set_objective(SEXP hi, std::vector<int32_t> index, std::vector<double_t> obj);
RcppExport SEXP _highs_solver_set_objective(SEXP hiSEXP, SEXP indexSEXP, SEXP objSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< std::vector<int32_t> >::type index(indexSEXP);
    Rcpp::traits::input_parameter< std::vector<double_t> >::type obj(objSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_set_objective(hi, index, obj));
    return rcpp_result_gen;
END_RCPP
}
// solver_set_variable_bounds
int32_t solver_set_variable_bounds(SEXP hi, std::vector<int32_t> index, std::vector<double_t> lower, std::vector<double_t> upper);
RcppExport SEXP _highs_solver_set_variable_bounds(SEXP hiSEXP, SEXP indexSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< std::vector<int32_t> >::type index(indexSEXP);
    Rcpp::traits::input_parameter< std::vector<double_t> >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< std::vector<double_t> >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_set_variable_bounds(hi, index, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// solver_set_constraint_bounds
int32_t solver_set_constraint_bounds(SEXP hi, std::vector<int32_t> index, std::vector<double_t> lower, std::vector<double_t> upper);
RcppExport SEXP _highs_solver_set_constraint_bounds(SEXP hiSEXP, SEXP indexSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< std::vector<int32_t> >::type index(indexSEXP);
    Rcpp::traits::input_parameter< std::vector<double_t> >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< std::vector<double_t> >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_set_constraint_bounds(hi, index, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// solver_set_coeff
SEXP solver_set_coeff(SEXP hi, std::vector<int32_t> row, std::vector<int32_t> col, std::vector<double_t> val);
RcppExport SEXP _highs_solver_set_coeff(SEXP hiSEXP, SEXP rowSEXP, SEXP colSEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< std::vector<int32_t> >::type row(rowSEXP);
    Rcpp::traits::input_parameter< std::vector<int32_t> >::type col(colSEXP);
    Rcpp::traits::input_parameter< std::vector<double_t> >::type val(valSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_set_coeff(hi, row, col, val));
    return rcpp_result_gen;
END_RCPP
}
// solver_add_vars
int32_t solver_add_vars(SEXP hi, std::vector<double_t> lower, std::vector<double_t> upper);
RcppExport SEXP _highs_solver_add_vars(SEXP hiSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< std::vector<double_t> >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< std::vector<double_t> >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_add_vars(hi, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// solver_set_option
int32_t solver_set_option(SEXP hi, std::string key, SEXP value);
RcppExport SEXP _highs_solver_set_option(SEXP hiSEXP, SEXP keySEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< std::string >::type key(keySEXP);
    Rcpp::traits::input_parameter< SEXP >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_set_option(hi, key, value));
    return rcpp_result_gen;
END_RCPP
}
// solver_clear
int32_t solver_clear(SEXP hi);
RcppExport SEXP _highs_solver_clear(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_clear(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_clear_model
int32_t solver_clear_model(SEXP hi);
RcppExport SEXP _highs_solver_clear_model(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_clear_model(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_clear_solver
int32_t solver_clear_solver(SEXP hi);
RcppExport SEXP _highs_solver_clear_solver(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_clear_solver(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_run
int32_t solver_run(SEXP hi);
RcppExport SEXP _highs_solver_run(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_run(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_get_model
SEXP solver_get_model(SEXP hi);
RcppExport SEXP _highs_solver_get_model(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_model(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_get_num_col
int32_t solver_get_num_col(SEXP hi);
RcppExport SEXP _highs_solver_get_num_col(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_num_col(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_get_num_row
int32_t solver_get_num_row(SEXP hi);
RcppExport SEXP _highs_solver_get_num_row(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_num_row(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_write_model
int32_t solver_write_model(SEXP hi, const std::string filename);
RcppExport SEXP _highs_solver_write_model(SEXP hiSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< const std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_write_model(hi, filename));
    return rcpp_result_gen;
END_RCPP
}
// solver_write_basis
int32_t solver_write_basis(SEXP hi, const std::string filename);
RcppExport SEXP _highs_solver_write_basis(SEXP hiSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< const std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_write_basis(hi, filename));
    return rcpp_result_gen;
END_RCPP
}
// solver_status_message
std::string solver_status_message(SEXP hi);
RcppExport SEXP _highs_solver_status_message(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_status_message(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_status
int32_t solver_status(SEXP hi);
RcppExport SEXP _highs_solver_status(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_status(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_infinity
double_t solver_infinity();
RcppExport SEXP _highs_solver_infinity() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(solver_infinity());
    return rcpp_result_gen;
END_RCPP
}
// reset_global_scheduler
SEXP reset_global_scheduler(bool blocking);
RcppExport SEXP _highs_reset_global_scheduler(SEXP blockingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type blocking(blockingSEXP);
    rcpp_result_gen = Rcpp::wrap(reset_global_scheduler(blocking));
    return rcpp_result_gen;
END_RCPP
}
// solver_info
Rcpp::List solver_info(SEXP hi);
RcppExport SEXP _highs_solver_info(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_info(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_solution
Rcpp::List solver_solution(SEXP hi);
RcppExport SEXP _highs_solver_solution(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_solution(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_get_bool_option
bool solver_get_bool_option(SEXP hi, std::string key);
RcppExport SEXP _highs_solver_get_bool_option(SEXP hiSEXP, SEXP keySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< std::string >::type key(keySEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_bool_option(hi, key));
    return rcpp_result_gen;
END_RCPP
}
// solver_get_int_option
int32_t solver_get_int_option(SEXP hi, std::string key);
RcppExport SEXP _highs_solver_get_int_option(SEXP hiSEXP, SEXP keySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< std::string >::type key(keySEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_int_option(hi, key));
    return rcpp_result_gen;
END_RCPP
}
// solver_get_dbl_option
double_t solver_get_dbl_option(SEXP hi, std::string key);
RcppExport SEXP _highs_solver_get_dbl_option(SEXP hiSEXP, SEXP keySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< std::string >::type key(keySEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_dbl_option(hi, key));
    return rcpp_result_gen;
END_RCPP
}
// solver_get_str_option
std::string solver_get_str_option(SEXP hi, std::string key);
RcppExport SEXP _highs_solver_get_str_option(SEXP hiSEXP, SEXP keySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< std::string >::type key(keySEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_str_option(hi, key));
    return rcpp_result_gen;
END_RCPP
}
// solver_change_variable_bounds
int32_t solver_change_variable_bounds(SEXP hi, IntegerVector idx, NumericVector lower, NumericVector upper);
RcppExport SEXP _highs_solver_change_variable_bounds(SEXP hiSEXP, SEXP idxSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_change_variable_bounds(hi, idx, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// solver_change_constraint_bounds
int32_t solver_change_constraint_bounds(SEXP hi, IntegerVector idx, NumericVector lhs, NumericVector rhs);
RcppExport SEXP _highs_solver_change_constraint_bounds(SEXP hiSEXP, SEXP idxSEXP, SEXP lhsSEXP, SEXP rhsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lhs(lhsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rhs(rhsSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_change_constraint_bounds(hi, idx, lhs, rhs));
    return rcpp_result_gen;
END_RCPP
}
// solver_add_rows
int32_t solver_add_rows(SEXP hi, NumericVector lhs, NumericVector rhs, IntegerVector start, IntegerVector index, NumericVector value);
RcppExport SEXP _highs_solver_add_rows(SEXP hiSEXP, SEXP lhsSEXP, SEXP rhsSEXP, SEXP startSEXP, SEXP indexSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lhs(lhsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rhs(rhsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type start(startSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type index(indexSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_add_rows(hi, lhs, rhs, start, index, value));
    return rcpp_result_gen;
END_RCPP
}
// solver_add_cols
int32_t solver_add_cols(SEXP hi, NumericVector costs, NumericVector lower, NumericVector upper, IntegerVector start, IntegerVector index, NumericVector value);
RcppExport SEXP _highs_solver_add_cols(SEXP hiSEXP, SEXP costsSEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP startSEXP, SEXP indexSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type start(startSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type index(indexSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_add_cols(hi, costs, lower, upper, start, index, value));
    return rcpp_result_gen;
END_RCPP
}
// solver_get_lp_costs
Rcpp::NumericVector solver_get_lp_costs(SEXP hi);
RcppExport SEXP _highs_solver_get_lp_costs(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_lp_costs(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_get_variable_bounds
Rcpp::NumericVector solver_get_variable_bounds(SEXP hi);
RcppExport SEXP _highs_solver_get_variable_bounds(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_variable_bounds(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_get_constraint_bounds
Rcpp::NumericVector solver_get_constraint_bounds(SEXP hi);
RcppExport SEXP _highs_solver_get_constraint_bounds(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_constraint_bounds(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_get_constraint_matrix
Rcpp::List solver_get_constraint_matrix(SEXP hi);
RcppExport SEXP _highs_solver_get_constraint_matrix(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_constraint_matrix(hi));
    return rcpp_result_gen;
END_RCPP
}
// solver_get_vartype
Rcpp::IntegerVector solver_get_vartype(SEXP hi);
RcppExport SEXP _highs_solver_get_vartype(SEXP hiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type hi(hiSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_vartype(hi));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_RcppHighs();

static const R_CallMethodDef CallEntries[] = {
    {"_highs_new_model", (DL_FUNC) &_highs_new_model, 0},
    {"_highs_model_set_ncol", (DL_FUNC) &_highs_model_set_ncol, 2},
    {"_highs_model_set_nrow", (DL_FUNC) &_highs_model_set_nrow, 2},
    {"_highs_model_set_sense", (DL_FUNC) &_highs_model_set_sense, 2},
    {"_highs_model_set_offset", (DL_FUNC) &_highs_model_set_offset, 2},
    {"_highs_model_set_objective", (DL_FUNC) &_highs_model_set_objective, 2},
    {"_highs_model_set_lower", (DL_FUNC) &_highs_model_set_lower, 2},
    {"_highs_model_set_upper", (DL_FUNC) &_highs_model_set_upper, 2},
    {"_highs_model_set_constraint_matrix_", (DL_FUNC) &_highs_model_set_constraint_matrix_, 5},
    {"_highs_model_set_lhs", (DL_FUNC) &_highs_model_set_lhs, 2},
    {"_highs_model_set_rhs", (DL_FUNC) &_highs_model_set_rhs, 2},
    {"_highs_model_set_hessian_", (DL_FUNC) &_highs_model_set_hessian_, 6},
    {"_highs_model_set_vartype", (DL_FUNC) &_highs_model_set_vartype, 2},
    {"_highs_model_get_nvars", (DL_FUNC) &_highs_model_get_nvars, 1},
    {"_highs_model_get_ncons", (DL_FUNC) &_highs_model_get_ncons, 1},
    {"_highs_new_solver", (DL_FUNC) &_highs_new_solver, 1},
    {"_highs_highs_pass_model", (DL_FUNC) &_highs_highs_pass_model, 16},
    {"_highs_solver_pass_hessian", (DL_FUNC) &_highs_solver_pass_hessian, 0},
    {"_highs_solver_pass_constraints", (DL_FUNC) &_highs_solver_pass_constraints, 0},
    {"_highs_solver_get_sense", (DL_FUNC) &_highs_solver_get_sense, 1},
    {"_highs_solver_set_sense", (DL_FUNC) &_highs_solver_set_sense, 2},
    {"_highs_solver_set_offset", (DL_FUNC) &_highs_solver_set_offset, 2},
    {"_highs_solver_set_integrality", (DL_FUNC) &_highs_solver_set_integrality, 3},
    {"_highs_solver_set_objective", (DL_FUNC) &_highs_solver_set_objective, 3},
    {"_highs_solver_set_variable_bounds", (DL_FUNC) &_highs_solver_set_variable_bounds, 4},
    {"_highs_solver_set_constraint_bounds", (DL_FUNC) &_highs_solver_set_constraint_bounds, 4},
    {"_highs_solver_set_coeff", (DL_FUNC) &_highs_solver_set_coeff, 4},
    {"_highs_solver_add_vars", (DL_FUNC) &_highs_solver_add_vars, 3},
    {"_highs_solver_set_option", (DL_FUNC) &_highs_solver_set_option, 3},
    {"_highs_solver_clear", (DL_FUNC) &_highs_solver_clear, 1},
    {"_highs_solver_clear_model", (DL_FUNC) &_highs_solver_clear_model, 1},
    {"_highs_solver_clear_solver", (DL_FUNC) &_highs_solver_clear_solver, 1},
    {"_highs_solver_run", (DL_FUNC) &_highs_solver_run, 1},
    {"_highs_solver_get_model", (DL_FUNC) &_highs_solver_get_model, 1},
    {"_highs_solver_get_num_col", (DL_FUNC) &_highs_solver_get_num_col, 1},
    {"_highs_solver_get_num_row", (DL_FUNC) &_highs_solver_get_num_row, 1},
    {"_highs_solver_write_model", (DL_FUNC) &_highs_solver_write_model, 2},
    {"_highs_solver_write_basis", (DL_FUNC) &_highs_solver_write_basis, 2},
    {"_highs_solver_status_message", (DL_FUNC) &_highs_solver_status_message, 1},
    {"_highs_solver_status", (DL_FUNC) &_highs_solver_status, 1},
    {"_highs_solver_infinity", (DL_FUNC) &_highs_solver_infinity, 0},
    {"_highs_reset_global_scheduler", (DL_FUNC) &_highs_reset_global_scheduler, 1},
    {"_highs_solver_info", (DL_FUNC) &_highs_solver_info, 1},
    {"_highs_solver_solution", (DL_FUNC) &_highs_solver_solution, 1},
    {"_highs_solver_get_bool_option", (DL_FUNC) &_highs_solver_get_bool_option, 2},
    {"_highs_solver_get_int_option", (DL_FUNC) &_highs_solver_get_int_option, 2},
    {"_highs_solver_get_dbl_option", (DL_FUNC) &_highs_solver_get_dbl_option, 2},
    {"_highs_solver_get_str_option", (DL_FUNC) &_highs_solver_get_str_option, 2},
    {"_highs_solver_change_variable_bounds", (DL_FUNC) &_highs_solver_change_variable_bounds, 4},
    {"_highs_solver_change_constraint_bounds", (DL_FUNC) &_highs_solver_change_constraint_bounds, 4},
    {"_highs_solver_add_rows", (DL_FUNC) &_highs_solver_add_rows, 6},
    {"_highs_solver_add_cols", (DL_FUNC) &_highs_solver_add_cols, 7},
    {"_highs_solver_get_lp_costs", (DL_FUNC) &_highs_solver_get_lp_costs, 1},
    {"_highs_solver_get_variable_bounds", (DL_FUNC) &_highs_solver_get_variable_bounds, 1},
    {"_highs_solver_get_constraint_bounds", (DL_FUNC) &_highs_solver_get_constraint_bounds, 1},
    {"_highs_solver_get_constraint_matrix", (DL_FUNC) &_highs_solver_get_constraint_matrix, 1},
    {"_highs_solver_get_vartype", (DL_FUNC) &_highs_solver_get_vartype, 1},
    {"_rcpp_module_boot_RcppHighs", (DL_FUNC) &_rcpp_module_boot_RcppHighs, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_highs(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}