/* day-012-samples -- source code for day-012
 * 2023 Free Software Foundation, Inc.
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main (int argc, char *argv[])
{

   // • Arrays
   /* Arrays are used to manage large numbers of objects of the same type. Arrays in C can have elements of any type
    * except a function type. The definition of an array specifies the array name, the type, and, optionally, the number
    * of array elements.
    */
      char line1[] = "asdfasdfjlkjlokjlk";
      char line2[80];

      strcpy(line2, "fasdfjalkjdfjasldjfajkfj");

      puts (line1);
      puts (line2);

   // • Pointers
   /* A pointer refers to a location in memory, and its type indicates how the data at this location is to be interpreted.
    * Array names and expressions such as &x are address constants or constant pointers, and cannot be changed.
    * Pointer variables, on the other hand, store the address of the object to which they refer, which address you may
    * change. A pointer variable is declared by an asterisk (*) prefixed to the identifier.
    *
    * A pointer with the value 0 is called a null pointer. Null pointers have a special significance in C. Because all
    * objects and functions have non-zero addresses, a null pointer always represents an invalid address. Functions that
    * return a pointer can therefore return a null pointer to indicate a failure condition.
    */
      int z = 27;
      int *pZ = &z;

      // *pZ has the same value of z = 27;

   // • Typedefs
   /* The keyword typedef is used to give a type a new name.
    *
    *
    */

      typedef unsigned char UCHAR;
      typedef struct { double x, y } POINT;

   /* After these type definitions, the identifier UCHAR can be used as an abbreviation for the type unsigned
    * char, and the identifier POINT can be used to specify the given structure type.
    */
      UCHAR c1, c2, tab[100];
      POINT point, *pPoint;

   exit (EXIT_SUCCESS);
}
