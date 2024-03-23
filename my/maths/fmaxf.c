/*
** EPITECH PROJECT, 2024
** libc
** File description:
** fmaxf
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Returns the maximum of two float-precision floating-point values.
///
/// \param x            The first float-precision floating-point value.
/// \param y            The second float-precision floating-point value.
///
/// \return             The maximum of the two values.
///
///////////////////////////////////////////////////////////////////////////////
float my_fmaxf(float x, float y)
{
    if (my_isnan(x))
        return (y);
    if (my_isnan(y))
        return (x);
    if (my_signbit(x) != my_signbit(y))
        return (my_signbit(x) ? y : x);
    return (x < y ? y : x);
}
