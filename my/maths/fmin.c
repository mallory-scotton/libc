/*
** EPITECH PROJECT, 2024
** libc
** File description:
** fmin
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Returns the minimum of two double-precision floating-point values.
///
/// \param x            The first double-precision floating-point value.
/// \param y            The second double-precision floating-point value.
///
/// \return             The minimum of the two values.
///
///////////////////////////////////////////////////////////////////////////////
double my_fmin(double x, double y)
{
    if (my_isnan(x))
        return (y);
    if (my_isnan(y))
        return (x);
    if (my_signbit(x) != my_signbit(y))
        return (my_signbit(x) ? x : y);
    return (x < y ? x : y);
}
