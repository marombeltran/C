
#include <stdio.h>
#include <stdlib.h>

/* 1. Lexical Elements ( .. that make up C source code after preprocesing).
 * --------------------------------------------------------------------------------------------
 * These elements are called tokens. There are five types of tokens: keywords, identifiers,
 * constants, operators, and separators. White space, sometimes required to separate tokens.
 */

int
main (int argc, char *argv[])
{   
   /* 1.1 Identifiers
    * --------------------------------------------------------------------------------------------
    * Identifiers are sequences of characters used for naming variables, functions, new data types,
    * and preprocessor macros. You can include letters, decimal digits, and underscore character '_'
    * in identifiers. 
    */

   // 1.1 Identifiers
   //  • When using GNU extensions, you can also include de dollar sign character '$' in iden-
   //    tifiers.
   
   int a = 10;
   int b = 11;

   // GNU C extension: Statement expression
   /*
   #ifdef __GNUC__
      int sum ({
         int $x =  a + b;
         $x;
      });
   #endif

   printf("sum: %d\n", sum(a, b));
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
   
   /* 1.3 Constants
    * --------------------------------------------------------------------------------------------
    * • A constant is a literal numeric or character value, such as 5 or ’m’. 
    * • All constants are of a particular data type; you can use type casting to explicitly specify 
    * the type of a constant, or let the compiler use the default type based on the value of 
    * the constant.
    */

   /* 1.3.1 Integer Constants
    * --------------------------------------------------------------------------------------------
    *  An integer constant is a sequence of digits, with an optional prefix to denote a number base.
    * If the sequence of digits is preceded by 0x or 0X (zero x or zero X), then the constant is
    * considered to be hexadecimal (base 16). Hexadecimal values may use the digits from 0 to
    * 9, as well as the letters a to f and A to F. Here are some examples:
    */

   /* If the first digit is 0 (zero), and the next character is not ‘x’ or ‘X’, then the constant is
    * considered to be octal (base 8). Octal values may only use the digits from 0 to 7; 8 and 9
    * are not allowed. Here are some examples:
    */
   char str[50];

   // Hex
   sprintf (str, "0x2f ->  %d\n0x88 -> %d", 0x2f, 0x88);
        0x2f;
        0x88;
        0xAB43;
        0xAbCd;
        0x1;

   puts (str);

   /* In all other cases, the sequence of digits is assumed to be decimal (base 10). Decimal
    * values may use the digits from 0 to 9. Here are some examples:
    */

   // Oct
   sprintf (str, "057 ->  %d\n012 -> %d", 057, 012);
        057;
        012;
        03;
        0241;

   puts (str);

   /* Some characters, such as the single quotation mark character itself, cannot be represented
    * using only one character. To represent such characters, there are several “escape sequences”
    * that you can use:
    */ 


   /* There are various integer data types, for short integers, long integers, signed integers,
    * and unsigned integers. You can force an integer constant to be of a long and/or unsigned
    * integer type by appending a sequence of one or more letters to the end of the constant:
    */ 
           12u;
           12U;       // Unsigned integer type.
           12l;
           12L;       // Long integer type.

   /* For example, 45U is an unsigned int constant. You can also combine letters: 45UL is
    * an unsigned long int constant. (The letters may be used in any order.)

    * Both ISO C99 and GNU C extensions add the integer types long long int and unsigned
    * long long int. You can use two ‘L’s to get a long long int constant; add a ‘U’ to that
    * and you have an unsigned long long int constant. For example: 45ULL.
    */

         45ul;
         78U;
         77Ul;

    /* 1.3.2 Character Constants
     * A character constant is usually a single character enclosed within single quotation marks,
     * such as ’Q’. A character constant is of type int by default.
     */

    // Here are some examples:
        'a'; // Remember that it should be a single character between 'single-quotation marks'
        'x';
        'y';
        'z';
        '1';
        ' ';

    // This will show an error 
    //  '';     error: empty character constant 

    /* Note:
     * GNU C source files are usually written in the ASCII character set, which was defined in the
     * 1960s for English. However, they can also include Unicode characters represented in the
     * UTF-8 multibyte encoding.
     */

        printf ("\\u6C34 -> \u6C34\n");
        printf ("u\'\\u6C34\' -> %c\n", u'\u6C34');
        printf ("u\'\\u6C34\' -> %c\n", U'\u6C34');
        
        wchar_t unicodeChar = L'\u6C34';
        printf ("Unicode character: %lc\n", unicodeChar);

     /* However, to enable programmers in all countries to understand and develop the
      * program, it is best under today’s circumstances to write all identifiers and comments in
      * English
      */
     
     /* Some characters, such as the single quotation mark character itself, cannot be represented
      * using only one character. To represent such characters, there are several “escape sequences”
      * that you can use:
      */ 
        '\\'; // Backslash character
        '\?'; // Question mark character
        '\''; // Single quotation mark
        '\"'; // Double quotation mark
        '\a'; '\x7'; // Audible alert
        '\b'; // Backspace character
        '\e'; // <ESC> character. (This is GNU extension)
        '\f'; // Form feed.
        '\n'; // Newline character.
        '\r'; // Carriage return.
        '\t'; // Horizontal tabs.
        '\v'; // Vertical tab.
        // '\o'; '\oo'; '\ooo'; // Octal number.
        // '\xh'; '\xhh'; '\xhhh'; '\x....' // Hexadecimal number.

    /* The octal number escape sequence is the backslash character followed by one, two, or
     * three octal digits (0 to 7). 
     */
        char c = '\101';
        printf ("\101 -> %c\n", c);
        printf ("\x7 -> %c [Audible alert]\n", '\x7');
    
    /* The hexadecimal escape sequence is the backslash character, followed by x and an un-
     * limited number of hexadecimal digits (0 to 9, and a to f or A to F).
     */

        printf ("\\x100 -> %lc\n", u'\x100');
        // printf ("\\xFFF -> %c\n", '\xFFF');

    /* Note:
     * While the length of possible hexadecimal digit strings is unlimited, the number of character 
     * constants in any given character set is not. (The much-used extended ASCII character set, 
     * for example, has only 256 characters in it.) If you try to use a hexadecimal value that
     * is outside the range of characters, you will get a compile-time error.
     */


   /* 1.3.3 Real Number Constants
    * A real number constant is a value that represents a fractional (floating point) number. It
    * consists of a sequence of digits which represents the integer (or “whole”) part of the number,
    * a decimal point, and a sequence of digits which represents the fractional part.

    * Either the integer part or the fractional part may be omitted, but not both. Here are
    * some examples:
    */

      double a, b, c, d, f;
      
      a = 4.7;
      b = 4.;
      c = 4;
      d = .7;
      f = 0.7;

      char str[64];

      sprintf (str, "a -> %f\nb -> %f\nc -> %f\nd -> %.2f\nf -> %.2f\n", a, b, c, d, f);
      
      puts (str);

   /* (In the third assignment statement, the integer constant 4 is automatically converted from
    * an integer value to a double value.)
    *
    * Real number constants can also be followed by e or E, and an integer exponent. The
    * exponent can be either positive or negative.
    */

      double x, y;

      x = 5e2; /* x is 5 * 100, or 500.0 */
      y = 5e-2; /* y is 5 * (1/100), or 0.05 */

   /* You can append a letter to the end of a real number constant to cause it to be of a
    * particular type. If you append the letter F (or f) to a real number constant, then its type
    * is float. If you append the letter L (or l), then its type is long double. If you do not
    * append any letters, then its type is double.
    */
      
      double w, z;
      
      w = .77f;
      z = .50001L;

      sprintf (str, "w bytes [%ld] -> %.2f\nz bytes [%ld] -> %.2f", sizeof(w), w, sizeof(z), z);

      puts (str);

      w = .77F;
      z = .50001l;

      sprintf (str, "w bytes [%ld] -> %.2f\nz bytes [%ld] -> %.2f", sizeof(w), w, sizeof(z), z);

      puts (str);

   /* A string constant is a sequence of zero or more characters, digits, and escape sequences
    * enclosed within double quotation marks. A string constant is of type “array of characters”.
    */

      ""; // zero characters
      "032323"; // digits
      "\n\t new line follows by one horizontal tabulation"; // escape sequences
      "A....z"; // A string constant if of type "array of characters"

    /* All string constants contain a null termination character (\0) as their last character. Strings
    * are stored as arrays of characters, with no inherent size attribute. The null termination
    * character lets string-processing functions know where the string ends.
    */
      
      char arr_str[] = {'h', 'i', '\0'};
      
      printf ("{'h', 'i', '\\0'} -> %s, length (%d)\n", arr_str, _strlen (arr_str));

   /* Adjacent string constants are concatenated (combined) into one string, with the null
    * termination character added to the end of the final concatenated string.
    */

      char a_str[] = {'h', 'i'};
      
      printf ("{'h', 'i'} -> %s, length (%d)\n", a_str, _strlen (a_str));

   exit (EXIT_SUCCESS);
}
