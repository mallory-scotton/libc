/*
** EPITECH PROJECT, 2024
** libc
** File description:
** fminf
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Returns the minimum of two float-precision floating-point values.
///
/// \param x            The first float-precision floating-point value.
/// \param y            The second float-precision floating-point value.
///
/// \return             The minimum of the two values.
///
///////////////////////////////////////////////////////////////////////////////
float my_fminf(float x, float y)
{
    if (my_isnan(x))
        return (y);
    if (my_isnan(y))
        return (x);
    if (my_signbit(x) != my_signbit(y))
        return (my_signbit(x) ? x : y);
    return (x < y ? x : y);
}
