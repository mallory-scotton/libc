/*
** EPITECH PROJECT, 2024
** LIBMY_MANAGER
** File description:
** my.calloc
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Allocate memory for an array of elements and initialize it to zero.
///
/// \param nelem        Number of elements to allocate.
/// \param elsize       Size of each element in bytes.
///
/// \return             Pointer to the allocated and initialized memory block.
///
///////////////////////////////////////////////////////////////////////////////
void *my_calloc(ulong_t nelem, ulong_t elsize)
{
    void *ptr;

    if (nelem == 0 || elsize == 0) {
        nelem = 1;
        elsize = 1;
    }
    ptr = (void *)malloc(nelem * elsize);
    if (ptr)
        BZERO(ptr, nelem * elsize);
    return (ptr);
}
