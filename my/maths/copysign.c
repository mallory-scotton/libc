/*
** EPITECH PROJECT, 2024
** libc
** File description:
** copysign
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Copies sign from 'y' to 'x'.
///
/// \param x            The value whose sign will be modified.
/// \param y            The value from which the sign will be copied.
///
/// \return             The value of 'x' with the sign of 'y'.
///
///////////////////////////////////////////////////////////////////////////////
double my_copysign(double x, double y)
{
    union {
        double f;
        u64_t i;
    } ux = {x};
    union {
        double f;
        u64_t i;
    } uy = {y};

    ux.i &= -1ULL / 2;
    ux.i |= uy.i & 1ULL << 63;
    return (ux.f);
}
