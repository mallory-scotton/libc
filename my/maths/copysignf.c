/*
** EPITECH PROJECT, 2024
** libc
** File description:
** copysignf
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
float my_copysignf(float x, float y)
{
    union {
        float f;
        u32_t i;
    } ux = {x};
    union {
        float f;
        u32_t i;
    } uy = {y};

    ux.i &= 0x7fffffff;
    ux.i |= uy.i & 0x80000000;
    return (ux.f);
}
