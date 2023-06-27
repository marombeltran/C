/* day-008-samples -- source code for day-008
 * 2023 Free Software Foundation, Inc.
 */ 

#include <stdio.h>
#include <stdlib.h>

int
_atoi (char s[])
{
   int i, n;

   n = 0;
   for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
      n = 10 * n + (s[i] - '0');

   return n;
}

int
main (int argc, char *argv[])
{

   /* 2 Data Types
    *
    * 2.1.1 Integer Types
    * • The integer data types range in size from at least 8 bits to at least 32 bits.
    *
    * • The C99 standard extends this range to include integer sizes of at least 64 bits.
    *
    * • You should use integer types for storing whole number values (and the char data 
    *   type for storing characters). The sizes and ranges listed for these types are minimums; 
    *   depending on your computer platform, these sizes and ranges may be larger.
    *
    * ----------------------------------------------------------------------------------------
    * • Variables and constants are the basic data objects manipulated in a program.
    * ----------------------------------------------------------------------------------------
    *
    * Declarations list the variables to be used, and state what type they have and
    * perhaps what their initial values are.
    *
    * The type of an object determines the set of values it can have and what operations
    * can be performed on it.
    *
    * There are now signed and unsigned forms of all
    * integer types, and notations for unsigned constants and hexadecimal character
    * constants.
    *
    * Don't begin variable names with underscore, however, since library rou-
    * tines often use such names.
    */

    /* 2. 7 Type Conversions
    * When an operator has operands of different types, they are converted to a
    * common type according to a small number of rules. 
    *
    * In general, the only automatic conversions are those that convert a "narrower" operand into a
    * "wider" one without losing information, such as converting an integer to floating
    * point in an expression like f + i.
    *
    * Expressions that don't make sense, like
    * using a float as a subscript, are disallowed. Expressions that might lose infor-
    * mation, like assigning a longer integer type to a shorter, or a floating-point type
    * to an integer, may draw a warning, but they are not illegal.
    *
    * ----------------------------------------------------------------------------------------
    * A char is just a small integer, so chars may be freely used in arithmetic expressions.
    * ----------------------------------------------------------------------------------------
    */ 

      char str[50]; 

      sprintf (str, "sample text to integer: 8933 -> %d", _atoi("8933"));

      puts ( str );

   exit (EXIT_SUCCESS);
}
