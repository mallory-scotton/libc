/*
** EPITECH PROJECT, 2024
** libc
** File description:
** isalpha
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Check if a character is an alphabetic character [a-Z].
///
/// \param ch       The character to check.
///
/// \return         TRUE if the character is an alphabetic character, FALSE
///                 otherwise.
///
///////////////////////////////////////////////////////////////////////////////
bool_t my_isalpha(int ch)
{
    return (BOOL((ch >= 'a' && ch <= 'z')
        || (ch >= 'A' && ch <= 'Z')));
}
