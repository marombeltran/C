/* day-001-samples -- source code for day-001.c
 * 2023 Free Software Foundation, Inc.
 */ 

#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
    // 1. Lexical Elements
    // 1.1 Identifiers

    //  • The first character of an identifier cannot be a digit.
       /* int 0foo; // error: invalid suffix "foo" on integer constant */

    //  • Lowercase letter and uppercase letters are distinct, such that foo and FOO 
   //     are two diferente variables (names).
    
    int baz, BAZ, baZ, Baz;
    baz = 12;
    BAZ = 459;
    baZ = 23901;
    Baz = 8;

    char str[50];

    sprintf (str, "baz %d\nBZA %d\nbaZ %d\nBaz %d\n", baz, BAZ, baZ, Baz);

    puts (str);

    exit (EXIT_SUCCESS);
}
