/* day-011-samples -- source code for day-011
 * 2023 Free Software Foundation, Inc.
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int
main (int argc, char *argv[])
{

   /* Derived Data types (overview) */

   // • Enumerations
   // --------------------------------------------------------------------------------------------
   // An enumeration is a custom data type used for storing constant integer values and referring
   // to them by names. By default, these values are of type signed int; however, you can use
   // the -fshort-enums GCC compiler option to cause the smallest possible integer type to be
   // used instead. Both of these behaviors conform to the C89 standard, but mixing the use of
   // these options within the same program can produce incompatibilities.
      
      enum fruit {grape, cherry, lemon, kiwi};

      // puts ();

   // • Unions
      
   // • Structures, Bit-Fields

   // • Arrays

   // • Pointers

   // • Typedefs


   /* Compilation system
    * --------------------------------------------------------------------------------------------
    */
   // unix> gcc -o day-011-samples day-011-samples.c

   // day-011-samples.c > Pre-processor (cpp)  >  day-011-samples.i   > Compiler (cc1) >    day-011-samples.s   > Assembler (as) >    day-011-samples.o     > Linker (ld) >    day-011-samples    >
   //     Source          ___________________         Modified          ______________          Assembly          ______________         Relocatable           ___________        Executable
   //    program                                       source                                   program                                    object                                   Object
   //    (text)                                        (text)                                    (text)                                   programs                                 program
   //                                                                                                                                      (text)                                  (binary)

   // run the 
   // unix> ./day-011-samples

   exit (EXIT_SUCCESS);
}
