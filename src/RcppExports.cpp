// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// get_vw_version
std::string get_vw_version();
RcppExport SEXP _rvw_get_vw_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_vw_version());
    return rcpp_result_gen;
END_RCPP
}
// vwtrain
void vwtrain(Rcpp::List& vwmodel, SEXP data, Rcpp::Nullable<Rcpp::String> readable_model, std::string readable_model_path, bool quiet, bool update_model, int passes, bool cache, Rcpp::Nullable<SEXP *> progress, Rcpp::Nullable<SEXP *> namespaces, Rcpp::Nullable<Rcpp::CharacterVector> keep_space, Rcpp::Nullable<Rcpp::CharacterVector> fixed, Rcpp::Nullable<Rcpp::CharacterVector> targets, Rcpp::Nullable<Rcpp::CharacterVector> probabilities, Rcpp::Nullable<Rcpp::String> weight, Rcpp::Nullable<Rcpp::String> base, Rcpp::Nullable<Rcpp::String> tag, Rcpp::Nullable<int> multiline);
RcppExport SEXP _rvw_vwtrain(SEXP vwmodelSEXP, SEXP dataSEXP, SEXP readable_modelSEXP, SEXP readable_model_pathSEXP, SEXP quietSEXP, SEXP update_modelSEXP, SEXP passesSEXP, SEXP cacheSEXP, SEXP progressSEXP, SEXP namespacesSEXP, SEXP keep_spaceSEXP, SEXP fixedSEXP, SEXP targetsSEXP, SEXP probabilitiesSEXP, SEXP weightSEXP, SEXP baseSEXP, SEXP tagSEXP, SEXP multilineSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type vwmodel(vwmodelSEXP);
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type readable_model(readable_modelSEXP);
    Rcpp::traits::input_parameter< std::string >::type readable_model_path(readable_model_pathSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    Rcpp::traits::input_parameter< bool >::type update_model(update_modelSEXP);
    Rcpp::traits::input_parameter< int >::type passes(passesSEXP);
    Rcpp::traits::input_parameter< bool >::type cache(cacheSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<SEXP *> >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<SEXP *> >::type namespaces(namespacesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type keep_space(keep_spaceSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type fixed(fixedSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type targets(targetsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type probabilities(probabilitiesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type base(baseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type tag(tagSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type multiline(multilineSEXP);
    vwtrain(vwmodel, data, readable_model, readable_model_path, quiet, update_model, passes, cache, progress, namespaces, keep_space, fixed, targets, probabilities, weight, base, tag, multiline);
    return R_NilValue;
END_RCPP
}
// vwtest
SEXP vwtest(Rcpp::List& vwmodel, SEXP data, std::string probs_path, bool full_probs, Rcpp::Nullable<Rcpp::String> readable_model, std::string readable_model_path, bool quiet, int passes, bool cache, bool raw, Rcpp::Nullable<SEXP *> progress, Rcpp::Nullable<SEXP *> namespaces, Rcpp::Nullable<Rcpp::CharacterVector> keep_space, Rcpp::Nullable<Rcpp::CharacterVector> fixed, Rcpp::Nullable<Rcpp::CharacterVector> targets, Rcpp::Nullable<Rcpp::CharacterVector> probabilities, Rcpp::Nullable<Rcpp::String> weight, Rcpp::Nullable<Rcpp::String> base, Rcpp::Nullable<Rcpp::String> tag, Rcpp::Nullable<int> multiline);
RcppExport SEXP _rvw_vwtest(SEXP vwmodelSEXP, SEXP dataSEXP, SEXP probs_pathSEXP, SEXP full_probsSEXP, SEXP readable_modelSEXP, SEXP readable_model_pathSEXP, SEXP quietSEXP, SEXP passesSEXP, SEXP cacheSEXP, SEXP rawSEXP, SEXP progressSEXP, SEXP namespacesSEXP, SEXP keep_spaceSEXP, SEXP fixedSEXP, SEXP targetsSEXP, SEXP probabilitiesSEXP, SEXP weightSEXP, SEXP baseSEXP, SEXP tagSEXP, SEXP multilineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type vwmodel(vwmodelSEXP);
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< std::string >::type probs_path(probs_pathSEXP);
    Rcpp::traits::input_parameter< bool >::type full_probs(full_probsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type readable_model(readable_modelSEXP);
    Rcpp::traits::input_parameter< std::string >::type readable_model_path(readable_model_pathSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    Rcpp::traits::input_parameter< int >::type passes(passesSEXP);
    Rcpp::traits::input_parameter< bool >::type cache(cacheSEXP);
    Rcpp::traits::input_parameter< bool >::type raw(rawSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<SEXP *> >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<SEXP *> >::type namespaces(namespacesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type keep_space(keep_spaceSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type fixed(fixedSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type targets(targetsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type probabilities(probabilitiesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type base(baseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type tag(tagSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type multiline(multilineSEXP);
    rcpp_result_gen = Rcpp::wrap(vwtest(vwmodel, data, probs_path, full_probs, readable_model, readable_model_path, quiet, passes, cache, raw, progress, namespaces, keep_space, fixed, targets, probabilities, weight, base, tag, multiline));
    return rcpp_result_gen;
END_RCPP
}
// vwaudit
Rcpp::DataFrame vwaudit(Rcpp::List& vwmodel, bool quiet);
RcppExport SEXP _rvw_vwaudit(SEXP vwmodelSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type vwmodel(vwmodelSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(vwaudit(vwmodel, quiet));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rvw_get_vw_version", (DL_FUNC) &_rvw_get_vw_version, 0},
    {"_rvw_vwtrain", (DL_FUNC) &_rvw_vwtrain, 18},
    {"_rvw_vwtest", (DL_FUNC) &_rvw_vwtest, 20},
    {"_rvw_vwaudit", (DL_FUNC) &_rvw_vwaudit, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_rvw(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
