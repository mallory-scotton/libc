/*
** EPITECH PROJECT, 2024
** LIBMY_MANAGER
** File description:
** memcmp
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

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
int my_memcmp(const void *s1, const void *s2, ulong_t n)
{
    custring_t p1 = (custring_t)s1;
    custring_t p2 = (custring_t)s2;

    if (n == 0)
        return (0);
    do {
        if (*p1 != *p2)
            return (*p1 - *p2);
        p1++;
        p2++;
        n--;
    } while (n != 0);
    return (0);
}
