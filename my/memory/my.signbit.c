/*
** EPITECH PROJECT, 2024
** LIBMY_MANAGER
** File description:
** my.signbit
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Check if the sign bit is set in the representation of a double.
///
/// \param nd           The double to check.
///
/// \return             TRUE if the sign bit is set (negative), FALSE
///                     otherwise.
///
///////////////////////////////////////////////////////////////////////////////
bool_t my_signbit(double nd)
{
    ullong_t *ptr = (ullong_t *)&nd;
    ullong_t bitmask = 0x8000000000000000ULL;

    return (BOOL((*ptr & bitmask) != 0));
}
