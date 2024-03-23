/*
** EPITECH PROJECT, 2024
** libc
** File description:
** floor
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Computes the largest integer value not greater than 'x'.
///
/// \param x            The input value.
///
/// \return             The largest integer value not greater than 'x'.
///
///////////////////////////////////////////////////////////////////////////////
double my_floor(double x)
{
    union {
        double f;
        u64_t i;
    } u = {x};
    int e = u.i >> 52 & 0x7ff;
    double y;

    if (e >= 0x3ff + 52 || x == 0)
        return (x);
    if (u.i >> 63)
        y = (double)(x - 0x1p52) + 0x1p52 - x;
    else
        y = (double)(x + 0x1p52) - 0x1p52 - x;
    if (e <= 0x3ff - 1)
        return (u.i >> 63 ? -1 : 0);
    return (y > 0 ? (x + y - 1) : (x + y));
}
