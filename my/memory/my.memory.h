/*
** EPITECH PROJECT, 2024
** LIBMY_MANAGER
** File description:
** my.memory
*/

#ifndef MY_MEMORY_H_
    #define MY_MEMORY_H_

///////////////////////////////////////////////////////////////////////////////
//                               --------------
//                                DEPENDENCIES
//                               --------------
///////////////////////////////////////////////////////////////////////////////
    #include "my.h"

///////////////////////////////////////////////////////////////////////////////
//                                -----------
//                                 CONSTANTS
//                                -----------
///////////////////////////////////////////////////////////////////////////////
    #define WSIZE sizeof(int)
    #define WMASK (WSIZE - 1)

///////////////////////////////////////////////////////////////////////////////
//                                 --------
//                                  MACROS
//                                 --------
///////////////////////////////////////////////////////////////////////////////
    #define BZERO(ptr, size) my_memset(ptr, 0, size)

///////////////////////////////////////////////////////////////////////////////
//                                -----------
//                                 FUNCTIONS
//                                -----------
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// \brief Allocate memory for an array of elements and initialize it to zero.
///
/// \param nelem        Number of elements to allocate.
/// \param elsize       Size of each element in bytes.
///
/// \return             Pointer to the allocated and initialized memory block.
///
///////////////////////////////////////////////////////////////////////////////
void *my_calloc(ulong_t nelem, ulong_t elsize);

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
void *my_memchr(const void *bigptr, int ch, ulong_t length);

///////////////////////////////////////////////////////////////////////////////
/// \brief Copies memory area from source to destination.
///
/// \param dst0         Pointer to the destination memory area.
/// \param src0         Pointer to the source memory area.
/// \param length       Number of bytes to copy.
///
/// \return             Pointer to the destination memory area.
///
///////////////////////////////////////////////////////////////////////////////
void *my_memcpy(void *dst0, const void *src0, ulong_t length);

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
void *my_memmove(void *s1, const void *s2, ulong_t n);

///////////////////////////////////////////////////////////////////////////////
/// \brief Copies bytes from source memory area to destination memory area.
///
/// \param s1           Pointer to the source memory area.
/// \param s2           Pointer to the destination memory area.
/// \param n            Number of bytes to copy.
///
///////////////////////////////////////////////////////////////////////////////
void my_bcopy(const void *s1, void *s2, ulong_t n);

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
void *my_realloc(void *ptr, ulong_t size);

///////////////////////////////////////////////////////////////////////////////
/// \brief Check if the sign bit is set in the representation of a double.
///
/// \param nd           The double to check.
///
/// \return             TRUE if the sign bit is set (negative), FALSE
///                     otherwise.
///
///////////////////////////////////////////////////////////////////////////////
bool_t my_signbit(double nd);

///////////////////////////////////////////////////////////////////////////////
/// \brief Sets a block of memory to the specified value.
///
/// \param dst          Pointer to the memory area to be set.
/// \param c0           Value to be set.
/// \param length       Number of bytes to set.
///
/// \return             A pointer to the memory area 'dst'.
///
///////////////////////////////////////////////////////////////////////////////
void *my_memset(void *dst0, int c0, ulong_t length);

///////////////////////////////////////////////////////////////////////////////
/// \brief Compare the first 'n' bytes of two memory blocks 's1' and 's2'.
///
/// \param s1           Pointer to the first memory block.
/// \param s2           Pointer to the second memory block.
/// \param n            Number of bytes to compare.
///
/// \return             Returns an integer less than, equal to, or greater
///                     than zero if the first 'n' bytes of 's1' are found to
///                     be less than, equal to, or greater than the first 'n'
///                     bytes of 's2'.
///
///////////////////////////////////////////////////////////////////////////////
int my_memcmp(const void *s1, const void *s2, ulong_t n);

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
ulong_t my_memlen(const void *ptr, ulong_t size);

#endif /* !MY_MEMORY_H_ */
