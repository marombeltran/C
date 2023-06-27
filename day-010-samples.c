/* day-010-samples -- source code for day-010
 * 2023 Free Software Foundation, Inc.
 */ 

#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
   // An 'expression' is a combination of values, variables, operators, and function calls that evaluates to a single value. 

   /* A 'statement' is a complete line or block of code that performs a specific action or task. 
    * It represents a complete instruction in a program and can consist of expressions, 
    * keywords, variables, and control flow constructs. Statements are executed 
    * sequentially unless altered by control flow constructs such as loops 
    * or conditional statements.
    */

      int x;

      x = 5; // assigment statement

      { // block statement 

         if (x <= 5) // conditional statement

         // block statement 
         {
            printf ("x is less than or equal to -> %d\n", x); // call function statement
         }
         else // statement
            puts ("i will never show myself");
      }

   /* They do not produce a value themselves but instead perform actions or cause side effects.
    */


   exit (EXIT_SUCCESS);
}
