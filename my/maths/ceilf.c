/*
** EPITECH PROJECT, 2024
** libc
** File description:
** ceilf
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
float my_ceilf(float x)
{
    union {
        float f;
        u32_t i;
    } u = {x};
    int e = (int)(u.i >> 23 & 0x7ff) - 0x7f;
    u32_t m = 0x007fffff >> e;

    if (e >= 23 || (e >= 0 && (u.i & m) == 0))
        return (x);
    if (e >= 0) {
        if (u.i >> 31 == 0)
            u.i += m;
        u.i &= ~m;
    } else {
        if (u.i >> 31)
            u.f = -0.0;
        if (!(u.i >> 31) && u.i << 1)
            u.f = 1.0;
    }
    return (u.f);
}
