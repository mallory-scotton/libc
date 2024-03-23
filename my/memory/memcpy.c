/*
** EPITECH PROJECT, 2024
** libc
** File description:
** memcpy
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Copies remaining bytes from source memory area to destination memory
///        area in low-to-high order.
///
/// \param dst          Pointer to the destination memory area.
/// \param src          Pointer to the source memory area.
/// \param length       Number of bytes to copy.
/// \param t            Temporary variable.
///
///////////////////////////////////////////////////////////////////////////////
static void cpy_low_high_chunk(string_t dst, cstring_t src, ulong_t length,
    ulong_t t)
{
    if (t) {
        do {
            *(int *)dst = *(int *)src;
            src += WSIZE;
            dst += WSIZE;
            t--;
        } while (t);
    }
    t = length & WMASK;
    if (t) {
        do {
            *dst = *src;
            dst++;
            src++;
            t--;
        } while (t);
    }
}

///////////////////////////////////////////////////////////////////////////////
/// \brief Copies bytes from source memory area to destination memory area
///        in low-to-high order.
///
/// \param dst          Pointer to the destination memory area.
/// \param src          Pointer to the source memory area.
/// \param length       Number of bytes to copy.
/// \param t            Temporary variable.
///
///////////////////////////////////////////////////////////////////////////////
static void cpy_low_high(string_t dst, cstring_t src, ulong_t length,
    ulong_t t)
{
    if ((t | (uint_t)dst & WMASK)) {
        if ((t ^ (uint_t)dst) & WMASK || length < WSIZE)
            t = length;
        else
            t = WSIZE - (t & WMASK);
        length -= t;
        do {
            *dst = *src;
            dst++;
            src++;
            t--;
        } while (t);
    }
    cpy_low_high_chunk(dst, src, length, length / WSIZE);
}

///////////////////////////////////////////////////////////////////////////////
/// \brief Copies remaining bytes from source memory area to destination memory
///        area in high-to-low order.
///
/// \param dst          Pointer to the destination memory area.
/// \param src          Pointer to the source memory area.
/// \param length       Number of bytes to copy.
/// \param t            Temporary variable.
///
///////////////////////////////////////////////////////////////////////////////
static void cpy_high_low_chunk(string_t dst, cstring_t src, ulong_t length,
    ulong_t t)
{
    if (t) {
        do {
            src -= WSIZE;
            dst -= WSIZE;
            *(int *)dst = *(int *)src;
            t--;
        } while (t);
    }
    t = length & WMASK;
    if (t) {
        do {
            dst--;
            src--;
            *dst = *src;
            t--;
        } while (t);
    }
}

///////////////////////////////////////////////////////////////////////////////
/// \brief Copies bytes from source memory area to destination memory area
///        in high-to-low order.
///
/// \param dst          Pointer to the destination memory area.
/// \param src          Pointer to the source memory area.
/// \param length       Number of bytes to copy.
/// \param t            Temporary variable.
///
///////////////////////////////////////////////////////////////////////////////
static void cpy_high_low(string_t dst, cstring_t src, ulong_t length,
    ulong_t t)
{
    src += length;
    dst += length;
    if ((t | (uint_t)dst) & WMASK) {
        if ((t ^ (uint_t)dst) & WMASK || length <= WSIZE)
            t = length;
        else
            t &= WMASK;
        length -= t;
        do {
            dst--;
            src--;
            *dst = *src;
            t--;
        } while (t);
    }
    cpy_high_low_chunk(dst, src, length, length / WSIZE);
}

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
void *my_memcpy(void *dst0, const void *src0, ulong_t length)
{
    string_t dst = (string_t)dst0;
    cstring_t src = (cstring_t)src0;

    if (length == 0 || dst == src)
        return (dst0);
    if ((ulong_t)dst < (ulong_t)src) {
        cpy_low_high(dst, src, length, (uint_t)src);
    } else {
        cpy_high_low(dst, src, length, (uint_t)src);
    }
    return (dst0);
}
