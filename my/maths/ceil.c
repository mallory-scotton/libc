/*
** EPITECH PROJECT, 2024
** libc
** File description:
** ceil.dev
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Computes the smallest integer value not less than 'x'.
///
/// \param x            The input value.
///
/// \return             The smallest integer value not less than 'x'.
///
///////////////////////////////////////////////////////////////////////////////
double my_ceil(double x)
{
    union {
        double f;
        u64_t i;
    } u = {x};
    int e = u.i >> 52 & 0x7ff;
    double y;
    const double ieps = (1 / DBL_EPSILON);

    if (e >= 0x3ff + 52 || x == 0)
        return (x);
    if (u.i >> 63)
        y = x - ieps + ieps - x;
    else
        y = x + ieps - ieps - x;
    if (e <= 0x3ff - 1)
        return (u.i >> 63 ? -0.0 : 1);
    return (y < 0 ? x + y + 1 : x + y);
}
