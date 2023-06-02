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

/* 1.1 Identifiers
 * --------------------------------------------------------------------------------------------
 * Identifiers are sequences of characters used for naming variables, functions, new data types,
 * and preprocessor macros. You can include letters, decimal digits, and underscore character '_'
 * in identifiers. 
 */

//  • The first character of an identifier cannot be a digit.
       int 0foo; // error: invalid suffix "foo" on integer constant
//         ^~~~

//  • Lowercase letter and uppercase letters are distinct, such that foo and FOO are two
//    different identifiers.
        int baz, BAZ, baZ, Baz;

//  • When using GNU extensions, you can also include de dollar sign character '$' in iden-
//    tifiers.

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


/* 1.3 Constants
 * --------------------------------------------------------------------------------------------
 * A constant is a literal numeric or character value, such as 5 or ’m’. All constants are of a
 * particular data type; you can use type casting to explicitly specify the type of a constant,
 * or let the compiler use the default type based on the value of the constant.
 */

/* 1.3.1 Integer Constants
 * --------------------------------------------------------------------------------------------
 * If the sequence of digits is preceded by 0x or 0X (zero x or zero X), then the constant is
 * considered to be hexadecimal (base 16). Hexadecimal values may use the digits from 0 to
 * 9, as well as the letters a to f and A to F. Here are some examples:
 */
        0x2f
        0x88
        0xAB43
        0xAbCd
        0x1

/* If the first digit is 0 (zero), and the next character is not ‘x’ or ‘X’, then the constant is
 * considered to be octal (base 8). Octal values may only use the digits from 0 to 7; 8 and 9
 * are not allowed. Here are some examples:
 */
        057
        012
        03
        0241

/* In all other cases, the sequence of digits is assumed to be decimal (base 10). Decimal
 * values may use the digits from 0 to 9. Here are some examples:
 */
        459
        23901
        8
        12

/* There are various integer data types, for short integers, long integers, signed integers,
 * and unsigned integers. You can force an integer constant to be of a long and/or unsigned
 * integer type by appending a sequence of one or more letters to the end of the constant:
 */ 
        u
        U       // Unsigned integer type.
        l
        L       // Long integer type.

/* For example, 45U is an unsigned int constant. You can also combine letters: 45UL is
 * an unsigned long int constant. (The letters may be used in any order.)

 * Both ISO C99 and GNU C extensions add the integer types long long int and unsigned
 * long long int. You can use two ‘L’s to get a long long int constant; add a ‘U’ to that
 * and you have an unsigned long long int constant. For example: 45ULL.
 */
