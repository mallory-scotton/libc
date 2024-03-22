/*
** EPITECH PROJECT, 2024
** LIBMY_MANAGER
** File description:
** my.isprint
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Check if a character is a printable character (ASCII space to
///        tilde).
///
/// \param ch       The character to check.
///
/// \return         TRUE if the character is a printable character, FALSE
///                 otherwise.
///
///////////////////////////////////////////////////////////////////////////////
bool_t my_isprint(int ch)
{
    return (BOOL(ch >= ' ' && ch <= '~'));
}
