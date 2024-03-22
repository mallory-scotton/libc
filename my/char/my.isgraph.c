/*
** EPITECH PROJECT, 2024
** LIBMY_MANAGER
** File description:
** my.isgraph
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Check if a character is a graphical character (printable and not a
///        space).
///
/// \param ch       The character to check.
///
/// \return         TRUE if the character is a graphical character, FALSE
///                 otherwise.
///
///////////////////////////////////////////////////////////////////////////////
bool_t my_isgraph(int ch)
{
    return (BOOL(my_isprint(ch) && !my_isspace(ch)));
}
