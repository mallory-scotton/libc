/*
** EPITECH PROJECT, 2024
** LIBMY_MANAGER
** File description:
** ispunct
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Check if a character is a punctuation character.
///
/// \param ch       The character to check.
///
/// \return         TRUE if the character is a punctuation character, FALSE
///                 otherwise.
///
///////////////////////////////////////////////////////////////////////////////
bool_t my_ispunct(int ch)
{
    return (BOOL((ch == '!' || (ch >= '"' && ch <= '&')
        || (ch >= '(' && ch <= '/') || (ch >= ':' && ch <= '?')
        || (ch >= '[' && ch <= '`') || (ch >= '{' && ch <= '~'))));
}
