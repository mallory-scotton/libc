/*
** EPITECH PROJECT, 2024
** libc
** File description:
** rand
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

static u64_t seed;

///////////////////////////////////////////////////////////////////////////////
/// \brief Sets the seed for the pseudo-random number generator.
///
/// \param s The seed value to set.
///
///////////////////////////////////////////////////////////////////////////////
void my_srand(unsigned s)
{
    seed = s - 1;
}

///////////////////////////////////////////////////////////////////////////////
/// \brief Generates a pseudo-random integer.
///
/// \return A pseudo-random integer.
///
///////////////////////////////////////////////////////////////////////////////
int my_rand(void)
{
    seed = 6364136223846793005ULL * seed + 1;
    return (seed >> 33);
}
