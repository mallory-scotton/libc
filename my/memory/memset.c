/*
** EPITECH PROJECT, 2024
** libc
** File description:
** memset
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Fills the remaining bytes of a memory area with a specified value.
///
/// \param dst          Pointer to the memory area.
/// \param c0           Value to be filled.
/// \param length       Number of bytes to fill.
///
///////////////////////////////////////////////////////////////////////////////
static void filling_remaining_word(ustring_t dst, int c0, ulong_t length)
{
    ulong_t t = length & WMASK;

    if (t) {
        do {
            *dst = c0;
            dst++;
            t--;
        } while (t);
    }
}

///////////////////////////////////////////////////////////////////////////////
/// \brief Fills a memory area with a specified value.
///
/// \param dst          Pointer to the memory area.
/// \param c0           Value to be filled for the remainder of the word.
/// \param c            Value to be filled for the word-sized chunks.
/// \param length       Number of bytes to fill.
///
///////////////////////////////////////////////////////////////////////////////
static void filling_word(ustring_t dst, int c0, uint_t c, ulong_t length)
{
    ulong_t t = (unsigned long int)dst & WMASK;

    if (t != 0) {
        t = WSIZE - t;
        length -= t;
        do {
            *dst = c0;
            dst++;
            t--;
        } while (t);
    }
    t = length / WSIZE;
    do {
        *(uint_t *)dst = c;
        dst += WSIZE;
        t--;
    } while (t);
    filling_remaining_word(dst, c0, length);
}

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
void *my_memset(void *dst0, int c0, ulong_t length)
{
    uint_t c = (uchar_t)c0;
    ustring_t dst = (ustring_t)dst0;

    if (length < 3 * WSIZE) {
        while (length != 0) {
            *dst = c0;
            dst++;
            --length;
        }
        return (dst0);
    }
    if (c != 0) {
        c = (c << 8) | c;
        if (UINT_MAX > 0xffff)
            c = (c << 16) | c;
        if (UINT_MAX > 0xffffffff)
            c = (c << 32) | c;
    }
    filling_word(dst, c0, c, length);
    return (dst0);
}
