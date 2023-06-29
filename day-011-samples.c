/* day-011-samples -- source code for day-011
 * 2023 Free Software Foundation, Inc.
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int
main (int argc, char *argv[])
{
   /* Compilation system
    * --------------------------------------------------------------------------------------------
    */
   // unix> gcc -o hello hello.c

   // hello.c > Pre-processor (cpp)  >  hello.i   > Compiler (cc1) >    hello.s   > Assembler (as) >    hello.o     > Linker (ld) >    hello    >
   // Source    ___________________     Modified    ______________     Assembly     ______________    Relocatable     ___________    Executable
   // program                            source                         program                          object                        Object
   // (text)                             (text)                          (text)                         programs                       program
   //                                                                                                    (text)                        (binary)

   exit (EXIT_SUCCESS);
}
