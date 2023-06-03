/**
 * The GNU C Reference Manual 
 * Copyright c 2007-2015 Free Software Foundation, Inc.
 */

/* Preface
 * --------------------------------------------------------------------------------------------
 * This is a reference manual for the C programming language as implemented by the GNU
 * Compiler Collection (GCC). Specifically, this manual aims to document:
 *      • The 1989 ANSI C standard, commonly known as “C89”
 *      • The 1999 ISO C standard, commonly known as “C99”, to the extent that C99 is
 *        implemented by GCC
 *      • The current state of GNU extensions to standard C
 * This manual describes C89 as its baseline. C99 features and GNU extensions are explicitly
 * labeled as such.
 *

 * By default, GCC will compile code as C89 plus GNU-specific extensions. Much of C99
 * is supported; once full support is available, the default compilation dialect will be C99
 * plus GNU-specific extensions. (Some of the GNU extensions to C89 ended up, sometimes
 * slightly modified, as standard language features in C99.)

 * The C language includes a set of preprocessor directives, which are used for things
 * such as macro text replacement, conditional compilation, and file inclusion. Although
 * normally described in a C language manual, the GNU C preprocessor has been thoroughly
 * documented in The C Preprocessor, a separate manual which covers preprocessing for C,
 * C++, and Objective-C programs, so it is not included here.
 */

/* 1. Lexical Elements ( .. that make up C source code after preprocesing).
 * --------------------------------------------------------------------------------------------
 * These elements are called tokens. There are five types of tokens: keywords, identifiers,
 * constants, operators, and separators. White space, sometimes required to separate tokens,
 * is also described in this chapter.
 */

#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
   /* 1.1 Identifiers
    * --------------------------------------------------------------------------------------------
    * Identifiers are sequences of characters used for naming variables, functions, new data types,
    * and preprocessor macros. You can include letters, decimal digits, and underscore character '_'
    * in identifiers. 
    */

    //  • The first character of an identifier cannot be a digit.
       /* int 0foo; // error: invalid suffix "foo" on integer constant */

    //  • Lowercase letter and uppercase letters are distinct, such that foo and FOO 
   //     are all diferente variables (names).
    
    int baz, BAZ, baZ, Baz;
    baz = 12;
    BAZ = 459;
    baZ = 23901;
    Baz = 8;

    char str[50];

    sprintf (str, "baz %d\nBZA %d\nbaZ %d\nBaz %d\n", baz, BAZ, baZ, Baz);

    puts (str);

   /* 1.2 Keywords
    * --------------------------------------------------------------------------------------------
    * Keywords are special identifiers reserved for use as part of the programming language itself.
    *

    * You cannot use them for any other purpuse.
    *      Here is a list of keywords recognized by ANSI C89
    *          auto break case char const continue default do double else enum extern
    *          float for goto if int long register return short signed sizeof static
    *          struct switch typedef union unsigned void volatile while
    * ISO C99 adds the following keywords:
    *          inline _Bool _Complex _Imaginary
    * and GNU extension add these keywords:
    *          __FUNCTION__ __PRETTY_FUNCTION__ __alignof __alignof__ __asm
    *          __asm__ __attribute __attribute__ __builtin_offsetof __builtin_va_arg
    *          __complex __complex__ __const __extension__ __func__ __imag __imag__
    *          __inline __inline__ __label__ __null __real __real__
    *          __restrict __restrict__ __signed __signed__ __thread __typeof
    *          __volatile __volatile__
    
    * In both ISO C99 and C89 with GNU extensions, the following is also recognized as a
    * keyword:
    *          restrict
    */

    exit (EXIT_SUCCESS);
}
