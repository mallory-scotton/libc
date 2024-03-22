/*
** EPITECH PROJECT, 2024
** LIBMY_MANAGER
** File description:
** my.isspace
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Check if a character is a whitespace character (tab, newline,
///        vertical tab, form feed, carriage return, or space).
///
/// \param ch       The character to check.
///
/// \return         TRUE if the character is a whitespace character, FALSE
///                 otherwise.
///
///////////////////////////////////////////////////////////////////////////////
bool_t my_isspace(int ch)
{
    return (BOOL(ch == '\t' || ch == '\n' || ch == '\v' || ch == '\f'
        || ch == '\r' || ch == ' '));
}
