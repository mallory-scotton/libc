/*
** EPITECH PROJECT, 2024
** libc
** File description:
** ffs
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Finds the position of the least significant bit set to 1 in a
///        bitmask.
///
/// \param mask         The bitmask to search.
///
/// \return             The position of the least significant bit set to 1,
///                     or 0 if 'mask' is 0.
///
///////////////////////////////////////////////////////////////////////////////
int my_ffs(int mask)
{
    int bit = 0;
    uint_t r = mask;
    static const signed char t[16] = {-28, 1, 2, 1, 3, 1, 2, 1, 4, 1, 2, 1, 3,
        1, 2, 1};

    if (!(r & 0xffff)) {
        bit += 16;
        r >>= 16;
    }
    if (!(r & 0xff)) {
        bit += 8;
        r >>= 8;
    }
    if (!(r & 0xf)) {
        bit += 4;
        r >>= 4;
    }
    return (bit + t[r & 0xf]);
}
