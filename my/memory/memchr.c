/*
** EPITECH PROJECT, 2024
** LIBMY_MANAGER
** File description:
** memchr
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Search for the first occurence of the character 'ch' in the first
///        'length' bytes of the memory block pointed to by 'bigptr'.
///
/// \param bigptr       Pointer to the memory block to search.
/// \param ch           The character to search for.
/// \param length       Number of bytes to search.
///
/// \return             If the character is found, a pointer to the first
///                     occurence of the character in the memory block;
///                     otherwise, NULL.
///
///////////////////////////////////////////////////////////////////////////////
void *my_memchr(const void *bigptr, int ch, ulong_t length)
{
    cstring_t big = (cstring_t)bigptr;

    for (ulong_t n = 0; n < length; n++)
        if (big[n] == ch)
            return ((void *)&big[n]);
    return (NULL);
}
