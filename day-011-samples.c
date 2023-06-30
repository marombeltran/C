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
      
   /* Enumeration types are used to define variables that can only be assigned certain discrete integer values
    * throughout the program. The possible values and names for them are defined in an enumeration.
    */
      enum toggle { OFF, ON, NO = 0, YES };

   /* The value of each identifier in the list may be determined explicitly, as in NO = 0 in the example above.
    * Identifiers for which no explicit value is specified are assigned a value automatically based on their position in the
    * list, as follows
    */

   // .. in the example above, the constants OFF and NO have the value 0, while ON and YES have the value 1

      enum toggle t1 = OFF;
      enum toggle t2 = ON;
      enum toggle t3 = NO;
      enum toggle t4 = YES;

      char str[50];

      sprintf (str, "t1 = OFF -> %d", t1);
      puts ( str );
      sprintf (str, "t2 = ON -> %d", t2);
      puts ( str );
      sprintf (str, "t3 = NO -> %d", t3);
      puts ( str );
      sprintf (str, "t4 = YES -> %d", t4);
      puts ( str );

   // • Unions
   /* A union is a user-defined data type that allows storing different types of data in the same memory location.
    * Unlike structures, which allocate memory for each member independently, a union shares a single 
    * memory block among all its members.
    */
      
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
