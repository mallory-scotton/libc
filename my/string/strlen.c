/*
** EPITECH PROJECT, 2024
** libc
** File description:
** strlen
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Computes the length of a null-terminated string.
///
/// \param s            A pointer to the null-terminated string.
///
/// \return             The length of the string.
///
///////////////////////////////////////////////////////////////////////////////
ulong_t my_strlen(cstring_t s)
{
    cstring_t a = s;
    const ulong_t *w;

    for (; (uint_t)s % ALIGN; s++)
        if (!*s)
            return (s - a);
    for (w = (const void *)s; !HASZERO(*w); w++);
    for (s = (const void *)w; *s; s++);
    return (s - a);
}
