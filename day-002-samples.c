/* day-002-samples -- source code for day-001.c
 * 2023 Free Software Foundation, Inc.
 */ 

#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
   
   // 1.1 Identifiers
   //  • When using GNU extensions, you can also include de dollar sign character '$' in iden-
   //    tifiers.
   
   int a = 10;
   int b = 11;

   // GNU C extension: Statement expression
   /*
   #ifdef __GNUC__
      int sum ({
         int $x =  a + b;
         $x;
      });
   #endif

   printf("sum: %d\n", sum(a, b));
   */
   
   /* 1.3.1 Integer Constants
    *  An integer constant is a sequence of digits, with an optional prefix to denote a number base.
    */
   char str[50];

   // Hex
   sprintf(str, "0x2f ->  %d\n0x88 -> %d", 0x2f, 0x88);
        0x2f;
        0x88;
        0xAB43;
        0xAbCd;
        0x1;

   puts (str);


   // Hex
   sprintf(str, "057 ->  %d\n012 -> %d", 057, 012);
        057;
        012;
        03;
        0241;

   puts (str);

   /* Some characters, such as the single quotation mark character itself, cannot be represented
    * using only one character. To represent such characters, there are several “escape sequences”
    * that you can use:
    */ 

   exit (EXIT_SUCCESS);
}
