/* day-009-samples -- source code for day-009
 * 2023 Free Software Foundation, Inc.
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int
main (int argc, char *argv[])
{

   /* 3.1 Expressions
    *
    * • Expressions combine variables and constants to produce new values.
    *
    * • The type of an object determines the set of values it can have and what operations
    *   can be performed on it.
    *
    * • Don't begin variable names with underscore, however, since library rou-
    *   tines often use such names.
    *
    * • At least the first 31 characters of an internal name are significant.
    *
    * An expression consists of at least one operand and zero or more operators. Operands are
    * typed objects such as constants, variables, and function calls that return values.
    *
    * Innermost expressions are evaluated first.
    */

      int x = INT_MAX;
      float y = LONG_MAX;
      // double z = DOUBLE_MAX; this shows an error becaues this constant doesn't exists

      printf ("INT MAX -> %d\n", x);
      printf ("FLOAT MAX -> %f\n", y);

   /* There are five types of tokens: keywords, identifiers,
    * constants, operators, and separators. White space, sometimes required to separate tokens.
    */

      "";
      ' ';
      "\t";
      12UL;
      323ULL;

   // separators
      puts ("\n");

   // puts ( 12ULL + 12L + 0xAAA ); // Shows an error: because the argument should be a 'const char *'

      char str[50];

   // use the most long type in the expression Long Long
      sprintf (str, "12ULL + 12L + 0xAAA -> %lld", 12ULL + 12L + 0xAAA);


      puts (str);
      
   /* 4 Statements
    * You write statements to cause actions and to control flow within your programs. You can
    * also write statements that do not do anything at all, or do things that are uselessly trivial.
    */

   exit (EXIT_SUCCESS);
}
