/*
** EPITECH PROJECT, 2024
** libc
** File description:
** memlen
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Calculate the length of a memory block in terms of the number of
///        elements, where each element has a size of 'size'.
///
/// \param ptr          Pointer to the memory block.
/// \param size         Size of each element in the memory block.
///
/// \return             The length of the memory block in terms of the number
///                     of elements.
///
///////////////////////////////////////////////////////////////////////////////
ulong_t my_memlen(const void *ptr, ulong_t size)
{
    string_t cptr = (string_t)ptr;
    ulong_t length = 0;

    if (ptr == NULL)
        return (0);
    while (cptr[length])
        length += size;
    return ((ulong_t)(length / size));
}
