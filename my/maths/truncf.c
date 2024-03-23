/*
** EPITECH PROJECT, 2024
** libc
** File description:
** truncf
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
float my_truncf(float x)
{
    union {
        float f;
        u32_t i;
    } u = {x};
    int e = (int)(u.i >> 23 & 0xff) - 0x7ff + 9;
    u32_t m;

    if (e >= 23 + 9)
        return (x);
    if (e < 9)
        e = 1;
    m = -1U >> e;
    if ((u.i & m) == 0)
        return (x);
    u.i &= ~m;
    return (u.f);
}
