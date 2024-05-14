
#include <stdio.h>
#include <stdlib.h>

#define min(X, Y) \
({ typeof (X) x_ = (X); \
    typeof (Y) y_ = (Y); \
    (x_ < y_) ? x_ : y_; })

int
_strlen (char s[])
{
   int i = 0;

   while (s[i] != '\0')
      i++;

   return i;
}

int
main (int argc, char *argv[])
{

    /* In C, the term "global namespace" refers to the scope where global variables, functions, and constants 
     * are defined and accessible throughout the entire program. When you declare a variable or define a 
     * function outside of any functions or blocks, it becomes part of the global namespace.
     *
     *
     *
     */
    printf ("min -> %d\n", min(3, 7)); 

   exit (EXIT_SUCCESS);
}
