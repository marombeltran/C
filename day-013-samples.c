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
      // enum toggle { OFF, ON};

      // this is teh other way:
      typedef enum {
        OFF = 49,
        ON = 50,
        PAUSE = 51,
        NEXT = 52,
        PREV = 53
      } _TOGGLE;

      _TOGGLE state;

      printf ("Please provide integer in range [1-4]: ");
      // state = getchar (); this is not alllowed

      // instead, we will do:
      int input = getchar ();
      state = input;

      printf ("Character entered: %c -> %d \n", state, state);
    
      switch (state) {
        case OFF:
          printf ("Machine states: OFF. \n");
          break;
        case ON:
          printf ("Machine states: ON. \n");
          break;
        case PAUSE:
          printf ("Machine states: PAUSE. \n");
          break;
        case NEXT:
          printf ("Machine states: NEXT. \n");
          break;
        case PREV:
          printf ("Machine states: PREV. \n");
          break;
      }

   exit (EXIT_SUCCESS);
 }
