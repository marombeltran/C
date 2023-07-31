
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
    printf ("min -> %d\n", min(3, 7)); 

   exit (EXIT_SUCCESS);
}
