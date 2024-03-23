/*
** EPITECH PROJECT, 2024
** LIBMY_MANAGER
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

///////////////////////////////////////////////////////////////////////////////
//                               ---------------
//                                CONFIGURATION
//                               ---------------
///////////////////////////////////////////////////////////////////////////////
    #define USE_CSFML 0

///////////////////////////////////////////////////////////////////////////////
//                               --------------
//                                DEPENDENCIES
//                               --------------
///////////////////////////////////////////////////////////////////////////////
    #include <limits.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <assert.h>
    #include <errno.h>
    #include <time.h>
    #include <string.h>
#if USE_CSFML == 1
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <SFML/Audio.h>
    #include <SFML/Config.h>
    #include <SFML/Network.h>
    #include <SFML/OpenGL.h>
#endif
    #include "char/char.h"
    #include "memory/memory.h"
    #include "maths/maths.h"

///////////////////////////////////////////////////////////////////////////////
//                                -----------
//                                 CONSTANTS
//                                -----------
///////////////////////////////////////////////////////////////////////////////
    #undef EXIT_FAILURE
    #define EXIT_FAILURE 84
    #undef EXIT_SUCCESS
    #define EXIT_SUCCESS 0
#ifndef NULL
    #define NULL (void *)0
#endif

///////////////////////////////////////////////////////////////////////////////
//                                 -------
//                                  TYPES
//                                 -------
///////////////////////////////////////////////////////////////////////////////
typedef unsigned char byte_t;
typedef unsigned int uint_t;
typedef unsigned char uchar_t;
typedef unsigned short ushort_t;
typedef unsigned long ulong_t;
typedef unsigned long long ullong_t;
typedef char *string_t;
typedef unsigned char *ustring_t;
typedef const char *cstring_t;
typedef const unsigned char *custring_t;
typedef string_t *warray_t;
typedef ustring_t *uwarray_t;
typedef cstring_t *cwarray_t;
typedef custring_t *cuwarray_t;
#if USE_CSFML == 1
typedef sfBool bool_t;
    #define TRUE sfTrue
    #define FALSE sfFalse
typedef sfVector2f vec2f_t;
typedef sfVector3f vec3f_t;
typedef sfVector2i vec2i_t;
typedef sfVector2u vec2u_t;
#else
typedef enum bool_e {
    FALSE,
    TRUE
} bool_t;
typedef struct vec2f_s {
    float x;
    float y;
} vec2f_t;
typedef struct vec3f_s {
    float x;
    float y;
    float z;
} vec3f_t;
typedef struct vec2i_s {
    int x;
    int y;
} vec2i_t;
typedef struct vec2u_s {
    uint_t x;
    uint_t y;
} vec2u_t;
#endif
typedef struct buffer_s {
    string_t content;
    ulong_t size;
} buffer_t;

///////////////////////////////////////////////////////////////////////////////
//                                 --------
//                                  MACROS
//                                 --------
///////////////////////////////////////////////////////////////////////////////
    #define VEC2F(x, y) ((vec2f_t){(float)x, (float)y})
    #define VEC2I(x, y) ((vec2i_t){(int)x, (int)y})
    #define VEC2U(x, y) ((vec2u_t){(uint_t)x, (uint_t)y})
    #define TVEC2F(v) ((vec2f_t){(float)((v).x), (float)((v).y)})
    #define TVEC2I(v) ((vec2i_t){(int)((v).x), (int)((v).y)})
    #define TVEC2U(v) ((vec2u_t){(uint_t)((v).x), (uint_t)((v).y)})
    #define BOOL(c) ((c) ? TRUE : FALSE)

#endif /* !MY_H_ */
