/**
 * @file simple_module_benchmark_case.hpp
 * @author Sumedh Ghaisas
 *
 * Declaration of macros used in MANAK_SIMPLE_BENCHMARK_MODULE.
 */

#ifndef MANAK_BASE_LIBRARY_NAME
#define MANAK_BASE_LIBRARY_NAME MANAK_SIMPLE_MODULE
#endif // MANAK_BASE_LIBRARY_NAME

////////////////////////////////////////////////////////////////////////////////
/// MANAK_BENCHMARK_CASE macros
////////////////////////////////////////////////////////////////////////////////

#define MANAK_BENCHMARK_CASE_TIS(Name, Function, Tol, Iter, SP)               \
_MANAK_BENCHMARK_CASE_TIS(Name, MANAK_BASE_LIBRARY_NAME, Function, Tol, Iter, SP)

#define MANAK_BENCHMARK_CASE_TI(Name, Function, Tol, Iter)                    \
MANAK_BENCHMARK_CASE_TIS(Name, Function, Tol, Iter, MANAK_DEFAULT_SP)

#define MANAK_BENCHMARK_CASE_IS(Name, Function, Iter, SP)                     \
MANAK_BENCHMARK_CASE_TIS(Name, Function, MANAK_DEFAULT_TOLERANCE, Iter, SP)

#define MANAK_BENCHMARK_CASE_I(Name, Function, Iter)                          \
MANAK_BENCHMARK_CASE_TI(Name, Function, Iter, MANAK_DEFAULT_TOLERANCE)

#define MANAK_BENCHMARK_CASE_T(Name, Function, Tol)                           \
MANAK_BENCHMARK_CASE_TI(Name, Function, Tol, MANAK_DEFAULT_ITERATIONS)

#define MANAK_BENCHMARK_CASE(Name, Function)                                  \
MANAK_BENCHMARK_CASE_T(Name, Function, MANAK_DEFAULT_TOLERANCE)


////////////////////////////////////////////////////////////////////////////////
/// MANAK_AUTO_BENCHMARK_CASE macros
////////////////////////////////////////////////////////////////////////////////

#define MANAK_AUTO_BENCHMARK_CASE_TIS(Name, Tol, Iter, SP)                    \
_MANAK_AUTO_BENCHMARK_CASE_TIS(Name, MANAK_BASE_LIBRARY_NAME, Tol, Iter, SP)

#define MANAK_AUTO_BENCHMARK_CASE_TI(Name, Tol, Iter)                         \
MANAK_AUTO_BENCHMARK_CASE_TIS(Name, Tol, Iter, MANAK_DEFAULT_SP)

#define MANAK_AUTO_BENCHMARK_CASE_IS(Name, Iter, SP)                          \
MANAK_AUTO_BENCHMARK_CASE_TIS(Name, MANAK_DEFAULT_TOLERANCE, Iter, SP)

#define MANAK_AUTO_BENCHMARK_CASE_T(Name, Tol)                                \
MANAK_AUTO_BENCHMARK_CASE_TI(Name, Tol, MANAK_DEFAULT_ITERATIONS)

#define MANAK_AUTO_BENCHMARK_CASE_I(Name, Iter)                               \
MANAK_AUTO_BENCHMARK_CASE_TI(Name, MANAK_DEFAULT_TOLERANCE, Iter)

#define MANAK_AUTO_BENCHMARK_CASE(Name)                                       \
MANAK_AUTO_BENCHMARK_CASE_T(Name, MANAK_DEFAULT_TOLERANCE)

////////////////////////////////////////////////////////////////////////////////
/// MANAK_CREATE_BENCHMARK_WITH_TEMPLATE macros
////////////////////////////////////////////////////////////////////////////////

#define MANAK_CREATE_BENCHMARK_WITH_TEMPLATE_TIS(Name, Fun, Tol, Iter, SP)    \
_MANAK_CREATE_BENCHMARK_WITH_TEMPLATE_TIS(Name, MANAK_BASE_LIBRARY_NAME, Fun, Tol, Iter, SP)

#define MANAK_CREATE_BENCHMARK_WITH_TEMPLATE_TI(Name, Fun, Tol, Iter)         \
MANAK_CREATE_BENCHMARK_WITH_TEMPLATE_TIS(Name, Fun, Tol, Iter, MANAK_DEFAULT_SP)

#define MANAK_CREATE_BENCHMARK_WITH_TEMPLATE_IS(Name, Fun, Iter, SP)          \
MANAK_CREATE_BENCHMARK_WITH_TEMPLATE_TIS(Name, Fun, MANAK_DEFAULT_TOLERANCE, Iter, SP)

#define MANAK_CREATE_BENCHMARK_WITH_TEMPLATE_T(Name, Fun, Tol)                \
MANAK_CREATE_BENCHMARK_WITH_TEMPLATE_TI(Name, Fun, Tol, MANAK_DEFAULT_ITERATIONS)

#define MANAK_CREATE_BENCHMARK_WITH_TEMPLATE_I(Name, Fun, Iter)               \
MANAK_CREATE_BENCHMARK_WITH_TEMPLATE_TI(Name, Fun, MANAK_DEFAULT_TOLERANCE, Iter)

#define MANAK_CREATE_BENCHMARK_WITH_TEMPLATE(Name, Fun)                       \
MANAK_CREATE_BENCHMARK_WITH_TEMPLATE_T(Name, Fun, MANAK_DEFAULT_TOLERANCE)

////////////////////////////////////////////////////////////////////////////////
/// MANAK AUTO GROUP BENCHMARK CASE MACROS
////////////////////////////////////////////////////////////////////////////////

#define MANAK_AUTO_GROUP_BENCHMARK_CASE_TIS(Name, Tol, Iter, SP)              \
_MANAK_AUTO_GROUP_BENCHMARK_CASE_TIS(Name, MANAK_STRINGIZE(MANAK_BASE_LIBRARY_NAME), Tol, Iter, SP)

#define MANAK_AUTO_GROUP_BENCHMARK_CASE_TI(Name, Tol, Iter)                   \
MANAK_AUTO_GROUP_BENCHMARK_CASE_TIS(Name, Tol, Iter, MANAK_DEFAULT_SP)

#define MANAK_AUTO_GROUP_BENCHMARK_CASE_IS(Name, Iter, SP)                    \
MANAK_AUTO_GROUP_BENCHMARK_CASE_TIS(Name, MANAK_DEFAULT_TOLERANCE, Iter, SP)

#define MANAK_AUTO_GROUP_BENCHMARK_CASE_T(Name, Tol)                          \
MANAK_AUTO_GROUP_BENCHMARK_CASE_TI(Name, Tol, MANAK_DEFAULT_ITERATIONS)

#define MANAK_AUTO_GROUP_BENCHMARK_CASE_I(Name, Iter)                         \
MANAK_AUTO_GROUP_BENCHMARK_CASE_TI(Name, MANAK_DEFAULT_TOLERANCE, Iter)

#define MANAK_AUTO_GROUP_BENCHMARK_CASE(Name)                                 \
MANAK_AUTO_GROUP_BENCHMARK_CASE_T(Name, MANAK_DEFAULT_TOLERANCE)

////////////////////////////////////////////////////////////////////////////////
/// MANAK GROUP BENCHMARK CASE MACROS
////////////////////////////////////////////////////////////////////////////////

#define MANAK_GROUP_BENCHMARK_CASE_TIS(Name, Fun, Tol, Iter, SP)              \
_MANAK_GROUP_BENCHMARK_CASE_TIS(Name, MANAK_STRINGIZE(MANAK_BASE_LIBRARY_NAME), Fun, Tol, Iter, SP)

#define MANAK_GROUP_BENCHMARK_CASE_TI(Name, Fun, Tol, Iter)                   \
MANAK_GROUP_BENCHMARK_CASE_TIS(Name, Fun, Tol, Iter, MANAK_DEFAULT_SP)

#define MANAK_GROUP_BENCHMARK_CASE_IS(Name, Fun, Iter, SP)                    \
MANAK_GROUP_BENCHMARK_CASE_TIS(Name, Fun, MANAK_DEFAULT_TOLERANCE, Iter, SP)

#define MANAK_GROUP_BENCHMARK_CASE_T(Name, Fun, Tol)                          \
MANAK_GROUP_BENCHMARK_CASE_TI(Name, Fun, Tol, MANAK_DEFAULT_ITERATIONS)

#define MANAK_GROUP_BENCHMARK_CASE_I(Name, Fun, Iter)                         \
MANAK_GROUP_BENCHMARK_CASE_TI(Name, Fun, MANAK_DEFAULT_TOLERANCE, Iter)

#define MANAK_GROUP_BENCHMARK_CASE(Name, Fun)                                 \
MANAK_GROUP_BENCHMARK_CASE_T(Name, Fun, MANAK_DEFAULT_TOLERANCE)

////////////////////////////////////////////////////////////////////////////////
/// MANAK CREATE GROUP BENCHMARK WITH TEMPLATE MACROS
////////////////////////////////////////////////////////////////////////////////

#define MANAK_CREATE_GROUP_BENCHMARK_WITH_TEMPLATE_TIS(Name, Fun, Tol, Iter, SP)  \
_MANAK_CREATE_GROUP_BENCHMARK_WITH_TEMPLATE_TIS(Name, MANAK_STRINGIZE(MANAK_BASE_LIBRARY_NAME), Fun, Tol, Iter, SP)

#define MANAK_CREATE_GROUP_BENCHMARK_WITH_TEMPLATE_TI(Name, Fun, Tol, Iter)   \
MANAK_CREATE_GROUP_BENCHMARK_WITH_TEMPLATE_TIS(Name, Fun, Tol, Iter, MANAK_DEFAULT_SP)

#define MANAK_CREATE_GROUP_BENCHMARK_WITH_TEMPLATE_IS(Name, Fun, Iter, SP)    \
MANAK_CREATE_GROUP_BENCHMARK_WITH_TEMPLATE_TIS(Name, Fun, MANAK_DEFAULT_TOLERANCE, Iter, SP)

#define MANAK_CREATE_GROUP_BENCHMARK_WITH_TEMPLATE_T(Name, Fun, Tol)          \
MANAK_CREATE_GROUP_BENCHMARK_WITH_TEMPLATE_TI(Name, Fun, Tol, MANAK_DEFAULT_ITERATIONS)

#define MANAK_CREATE_GROUP_BENCHMARK_WITH_TEMPLATE_I(Name, Fun, Iter)         \
MANAK_CREATE_GROUP_BENCHMARK_WITH_TEMPLATE_TI(Name, Fun, MANAK_DEFAULT_TOLERANCE, Iter)

#define MANAK_CREATE_GROUP_BENCHMARK_WITH_TEMPLATE(Name, Fun)                 \
MANAK_CREATE_GROUP_BENCHMARK_WITH_TEMPLATE_T(Name, Fun, MANAK_DEFAULT_TOLERANCE)
