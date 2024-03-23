/*
** EPITECH PROJECT, 2024
** libc
** File description:
** fmax
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Returns the maximum of two double-precision floating-point values.
///
/// \param x            The first double-precision floating-point value.
/// \param y            The second double-precision floating-point value.
///
/// \return             The maximum of the two values.
///
///////////////////////////////////////////////////////////////////////////////
double my_fmax(double x, double y)
{
    if (my_isnan(x))
        return (y);
    if (my_isnan(y))
        return (x);
    if (my_signbit(x) != my_signbit(y))
        return (my_signbit(x) ? y : x);
    return (x < y ? y : x);
}
