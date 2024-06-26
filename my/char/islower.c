/*
** EPITECH PROJECT, 2024
** libc
** File description:
** islower
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Check if a character is a lowercase letter.
///
/// \param ch       The character to check.
///
/// \return         TRUE if the character is a lowercase letter, FALSE
///                 otherwise.
///
///////////////////////////////////////////////////////////////////////////////
bool_t my_islower(int ch)
{
    return (BOOL(ch >= 'a' && ch <= 'z'));
}
