/* day-003-samples -- source code for day-001.c
 * 2023 Free Software Foundation, Inc.
 */ 

#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
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
    //
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
     * While the length of possible hexadecimal digit strings is unlimited, the number of character constants in any given character set is not. (The much-used extended ASCII character
     * set, for example, has only 256 characters in it.) If you try to use a hexadecimal value that
     * is outside the range of characters, you will get a compile-time error.
     */

   exit (EXIT_SUCCESS);
}
