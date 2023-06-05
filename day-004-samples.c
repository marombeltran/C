/* day-004-samples -- source code for day-004
 * 2023 Free Software Foundation, Inc.
 */ 

#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
   /* 1.3.3 Real Number Constants
    * A real number constant is a value that represents a fractional (floating point) number. It
    * consists of a sequence of digits which represents the integer (or “whole”) part of the number,
    * a decimal point, and a sequence of digits which represents the fractional part.

    * Either the integer part or the fractional part may be omitted, but not both. Here are
    * some examples:
    */

      double a, b, c, d, f;
      
      a = 4.7;
      b = 4.;
      c = 4;
      d = .7;
      f = 0.7;

      char str[64];

      sprintf (str, "a -> %f\nb -> %f\nc -> %f\nd -> %.2f\nf -> %.2f\n", a, b, c, d, f);
      
      puts (str);

   /* (In the third assignment statement, the integer constant 4 is automatically converted from
    * an integer value to a double value.)
    *
    * Real number constants can also be followed by e or E, and an integer exponent. The
    * exponent can be either positive or negative.
    */

      double x, y;

      x = 5e2; /* x is 5 * 100, or 500.0 */
      y = 5e-2; /* y is 5 * (1/100), or 0.05 */

   /* You can append a letter to the end of a real number constant to cause it to be of a
    * particular type. If you append the letter F (or f) to a real number constant, then its type
    * is float. If you append the letter L (or l), then its type is long double. If you do not
    * append any letters, then its type is double.
    */
      
      double w, z;
      
      w = .77f;
      z = .50001L;

      sprintf (str, "w bytes [%ld] -> %.2f\nz bytes [%ld] -> %.2f", sizeof(w), w, sizeof(z), z);

      puts (str);

      w = .77F;
      z = .50001l;
      sprintf (str, "w bytes [%ld] -> %.2f\nz bytes [%ld] -> %.2f", sizeof(w), w, sizeof(z), z);

      puts (str);

      
      
   exit (EXIT_SUCCESS);
}
