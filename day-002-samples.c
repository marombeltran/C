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
   
   /* 1.3 Constants
    * --------------------------------------------------------------------------------------------
    * A constant is a literal numeric or character value, such as 5 or ’m’. All constants are of a
    * particular data type; you can use type casting to explicitly specify the type of a constant,
    * or let the compiler use the default type based on the value of the constant.
    */

   /* 1.3.1 Integer Constants
    * --------------------------------------------------------------------------------------------
    *  An integer constant is a sequence of digits, with an optional prefix to denote a number base.
    * If the sequence of digits is preceded by 0x or 0X (zero x or zero X), then the constant is
    * considered to be hexadecimal (base 16). Hexadecimal values may use the digits from 0 to
    * 9, as well as the letters a to f and A to F. Here are some examples:
    */

   /* If the first digit is 0 (zero), and the next character is not ‘x’ or ‘X’, then the constant is
    * considered to be octal (base 8). Octal values may only use the digits from 0 to 7; 8 and 9
    * are not allowed. Here are some examples:
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

   /* In all other cases, the sequence of digits is assumed to be decimal (base 10). Decimal
    * values may use the digits from 0 to 9. Here are some examples:
    */

   // Oct
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


   /* There are various integer data types, for short integers, long integers, signed integers,
    * and unsigned integers. You can force an integer constant to be of a long and/or unsigned
    * integer type by appending a sequence of one or more letters to the end of the constant:
    */ 
           12u;
           12U;       // Unsigned integer type.
           12l;
           12L;       // Long integer type.

   /* For example, 45U is an unsigned int constant. You can also combine letters: 45UL is
    * an unsigned long int constant. (The letters may be used in any order.)

    * Both ISO C99 and GNU C extensions add the integer types long long int and unsigned
    * long long int. You can use two ‘L’s to get a long long int constant; add a ‘U’ to that
    * and you have an unsigned long long int constant. For example: 45ULL.
    */

         45ul;
         78U;
         77Ul;

   exit (EXIT_SUCCESS);
}
