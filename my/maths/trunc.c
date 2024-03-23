/*
** EPITECH PROJECT, 2024
** libc
** File description:
** trunc
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Computes the nearest integer value to 'x' not greater in magnitude.
///
/// \param x            The input value.
///
/// \return             The nearest integer value to 'x' not greater in
///                     magnitude.
///
///////////////////////////////////////////////////////////////////////////////
double my_trunc(double x)
{
    union {
        double f;
        u64_t i;
    } u = {x};
    int e = (int)(u.i >> 52 & 0x7ff) - 0x3ff + 12;
    u64_t m;

    if (e >= 52 + 12)
        return (x);
    if (e < 12)
        e = 1;
    m = -1ULL >> e;
    if ((u.i & m) == 0)
        return (0);
    u.i &= ~m;
    return (u.f);
}
