/* day-013-samples -- source code for day-013
 * 2023 Free Software Foundation, Inc.
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main (int argc, char *argv[])
 {

   /* Examples and challenges using enumerations.
    * --------------------------------------------------------------------------------------------
    */

   // definition syntax
   // enum [identifier] { enumerator-list }

   /* They usually are used when we have a fixed set of values that a variable can take on, and you want
    * to make your code more readable and self-explatory.
    */
      enum toggle { OFF, ON, NO = 0, YES };


   exit (EXIT_SUCCESS);
 }
