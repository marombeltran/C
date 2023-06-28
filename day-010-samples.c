/* day-010-samples -- source code for day-010
 * 2023 Free Software Foundation, Inc.
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int
duplicate (int x)
{
   return 2 * x; // return statement
}

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
            printf ("x is less than or equal to -> %d\n", x); // function call statement
         }
         else // else conditional statement
            puts ("i will never show myself");
      }

   /* They do not produce a value themselves but instead perform actions or cause side effects.
    */

      printf ("function call statement -> %d\n", duplicate(x));

   // loop statements 
      while (false); // it might need a block
      for (; x > 10 ;); // it might need a block
      do { 
         /* something */ 
      } while(false);

   // simples statements
      if (false) // it might need a block
         ;
      else if (false || true)
         ;
      else
         ;

      switch (1) {
         case 2: // some stupid things
         ;
         break;
         default:
            // some statement
         ;
      }

   // don't do that if you don't know what it's about
   _a:
      puts ("this is another looop");

      if (x < 15)
         x++; // increment statement

      else goto _b;
   goto _a;

   _b:

   // There is a statement that is the most basic instruction in a C program.
      ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
      ;
      ; // Don't forget it at the end of a compound statement

   /* pure function? 
    */

   exit (EXIT_SUCCESS);
}
