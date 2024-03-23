/*
** EPITECH PROJECT, 2024
** LIBMY_MANAGER
** File description:
** realloc
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Reallocate memory for a block with a new size and copy the
///        existing data.
///
/// \param ptr          Pointer to the current memory block to be reallocated.
/// \param size         New size of the memory block in bytes.
///
/// \return             Pointer to the reallocated and copied memory block.
///
///////////////////////////////////////////////////////////////////////////////
void *my_realloc(void *ptr, ulong_t size)
{
    void *new_ptr = NULL;

    if (size == 0)
        return (NULL);
    new_ptr = malloc(size);
    if (new_ptr && ptr) {
        my_memcpy(new_ptr, ptr, size);
        free(ptr);
    }
    return (new_ptr);
}
