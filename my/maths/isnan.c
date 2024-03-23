/*
** EPITECH PROJECT, 2024
** libc
** File description:
** isnan
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Checks if a double-precision floating-point value is NaN.
///
/// \param x            The double-precision floating-point value to check.
///
/// \return             True if the value is NaN, false otherwise.
///
///////////////////////////////////////////////////////////////////////////////
bool_t my_isnan(double x)
{
    i32_t hx;
    i32_t lx;
    union {
        double value;
        struct {
            u32_t lsw;
            u32_t msw;
        } parts;
    } ew_u = {x};

    hx = ew_u.parts.msw;
    lx = ew_u.parts.lsw;
    hx &= 0x7fffffff;
    hx |= (u32_t)(lx | (-lx)) >> 31;
    hx = 0x7ff00000 - hx;
    return (BOOL((int)((u32_t)(hx)) >> 31));
}
