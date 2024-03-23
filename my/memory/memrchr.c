/*
** EPITECH PROJECT, 2024
** libc
** File description:
** memrchr
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Finds the last occurrence of a character in a block of memory.
///
/// \param s            A pointer to the memory block to search.
/// \param c            The character to search for.
/// \param n            The number of bytes to search.
///
/// \return             A pointer to the last occurrence of the character, or
///                     NULL if not found.
///
///////////////////////////////////////////////////////////////////////////////
void *my_memrchr(const void *s, int c, ulong_t n)
{
    custring_t cp = (ustring_t *)s + n;

    if (n == 0)
        return (NULL);
    do {
        cp--;
        if (*cp == (uchar_t)c)
            return ((void *)cp);
        n--;
    } while (n != 0);
    return (NULL);
}
