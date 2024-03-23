/*
** EPITECH PROJECT, 2024
** libc
** File description:
** maths
*/

#ifndef LIBMY_MATHS_H_
    #define LIBMY_MATHS_H_

///////////////////////////////////////////////////////////////////////////////
//                               --------------
//                                DEPENDENCIES
//                               --------------
///////////////////////////////////////////////////////////////////////////////
    #include "my.h"

///////////////////////////////////////////////////////////////////////////////
//                                -----------
//                                 CONSTANTS
//                                -----------
///////////////////////////////////////////////////////////////////////////////
    #define PI 3.14159265358979323846
#ifndef _FLOAT_H___
    #define _FLOAT_H___
    #define FLT_RADIX 2
    #define FLT_MANT_DIG 24
    #define FLT_DIG 6
    #define FLT_ROUNDS 1
    #define FLT_EPSILON 1.1920929e-07F
    #define FLT_MIN_EXP (-125)
    #define FLT_MIN 1.17549435e-38F
    #define FLT_MIN_10_EXP (-37)
    #define FLT_MAX_EXP 128
    #define FLT_MAX 3.40282347e+38F
    #define FLT_MAX_10_EXP 38
    #define DBL_MANT_DIG 53
    #define DBL_DIG 15
    #define DBL_EPSILON 2.2204460492503131e-16
    #define DBL_MIN_EXP (-1021)
    #define DBL_MIN 2.2250738585072014e-308
    #define DBL_MIN_10_EXP (-307)
    #define DBL_MAX_EXP 1024
    #define DBL_MAX 1.7976931348623157e+308
    #define DBL_MAX_10_EXP 308
    #define LDBL_MANT_DIG DBL_MANT_DIG
    #define LDBL_DIG DBL_DIG
    #define LDBL_EPSILON DBL_EPSILON
    #define LDBL_MIN_EXP DBL_MIN_EXP
    #define LDBL_MIN DBL_MIN
    #define LDBL_MIN_10_EXP DBL_MIN_10_EXP
    #define LDBL_MAX_EXP DBL_MAX_EXP
    #define LDBL_MAX DBL_MAX
    #define LDBL_MAX_10_EXP DBL_MAX_10_EXP
#endif

///////////////////////////////////////////////////////////////////////////////
//                                 -------
//                                  TYPES
//                                 -------
///////////////////////////////////////////////////////////////////////////////
typedef uchar_t u8_t;
typedef ushort_t u16_t;
typedef uint_t u32_t;
typedef ullong_t u64_t;

///////////////////////////////////////////////////////////////////////////////
//                                 --------
//                                  MACROS
//                                 --------
///////////////////////////////////////////////////////////////////////////////
    #define MAX(a, b) ((a) > (b) ? (a) : (b))
    #define MIN(a, b) ((a) < (b) ? (a) : (b))
    #define LERP(a, b, t) ((a) * (1 - t) + (b) * (t))
    #define CLAMP01(x) (((x) < 0) ? 0 : (((x) > 1) ? 1 : (x)))
    #define CLAMP(x, mi, ma) ((x) < (mi) ? (mi) : ((x) > (ma) ? (ma) : (x)))
    #define ABS(x) ((x) < 0 ? -(x) : (x))
    #define FABS(x) ((x) < 0.0f ? -(x) : (x))
    #define CUBE(x) ((x) * (x) * (x))
    #define SQUARE(x) ((x) * (x))
    #define MIN3(a, b, c) MIN(MIN((a), (b)), (c))
    #define MAX3(a, b, c) MAX(MAX((a), (b)), (c))
    #define MID(x, y) (((x) - (y)) / 2)

///////////////////////////////////////////////////////////////////////////////
//                                -----------
//                                 FUNCTIONS
//                                -----------
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// \brief Check if the sign bit is set in the representation of a double.
///
/// \param nd           The double to check.
///
/// \return             TRUE if the sign bit is set (negative), FALSE
///                     otherwise.
///
///////////////////////////////////////////////////////////////////////////////
bool_t my_signbit(double nd);

///////////////////////////////////////////////////////////////////////////////
/// \brief Computes the smallest integer value not less than 'x'.
///
/// \param x            The input value.
///
/// \return             The smallest integer value not less than 'x'.
///
///////////////////////////////////////////////////////////////////////////////
double my_ceil(double x);

///////////////////////////////////////////////////////////////////////////////
/// \brief Computes the largest integer value not greater than 'x'.
///
/// \param x            The input value.
///
/// \return             The largest integer value not greater than 'x'.
///
///////////////////////////////////////////////////////////////////////////////
double my_floor(double x);

///////////////////////////////////////////////////////////////////////////////
/// \brief Computes the nearest integer value to 'x' not greater in magnitude.
///
/// \param x            The input value.
///
/// \return             The nearest integer value to 'x' not greater in
///                     magnitude.
///
///////////////////////////////////////////////////////////////////////////////
double my_trunc(double x);

///////////////////////////////////////////////////////////////////////////////
/// \brief Computes the nearest integer value to 'x' not greater in magnitude.
///
/// \param x            The input value.
///
/// \return             The nearest integer value to 'x' not greater in
///                     magnitude.
///
///////////////////////////////////////////////////////////////////////////////
float my_truncf(float x);

//////////////////////////////////////////////////////////////////////////////
/// \brief Computes the nearest integer value to 'x' not greater in magnitude.
///
/// \param x            The input value.
///
/// \return             The nearest integer value to 'x' not greater in
///                     magnitude.
///
///////////////////////////////////////////////////////////////////////////////
long double my_truncl(long double x);

///////////////////////////////////////////////////////////////////////////////
/// \brief Copies sign from 'y' to 'x'.
///
/// \param x            The value whose sign will be modified.
/// \param y            The value from which the sign will be copied.
///
/// \return             The value of 'x' with the sign of 'y'.
///
///////////////////////////////////////////////////////////////////////////////
double my_copysign(double x, double y);

///////////////////////////////////////////////////////////////////////////////
/// \brief Copies sign from 'y' to 'x'.
///
/// \param x            The value whose sign will be modified.
/// \param y            The value from which the sign will be copied.
///
/// \return             The value of 'x' with the sign of 'y'.
///
///////////////////////////////////////////////////////////////////////////////
float my_copysignf(float x, float y);

#endif /* !LIBMY_MATHS_H_ */
