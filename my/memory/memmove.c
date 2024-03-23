/*
** EPITECH PROJECT, 2024
** LIBMY_MANAGER
** File description:
** memmove
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Moves memory area.
///
/// \param s1           Pointer to the destination memory area.
/// \param s2           Pointer to the source memory area.
/// \param n            Number of bytes to move.
///
/// \return             Pointer to the destination memory area.
///
///////////////////////////////////////////////////////////////////////////////
void *my_memmove(void *s1, const void *s2, ulong_t n)
{
    return (my_memcpy(s1, s2, n));
}