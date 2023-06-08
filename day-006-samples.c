/* day-006-samples -- source code for day-006
 * 2023 Free Software Foundation, Inc.
 */ 

#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
   /* Most operators in C consist of one or two characters that can’t be used in identifiers.
    * The characters used for operators in C are ‘!~^&|*/%+-=<>,.?:’.
    */

   /* Some operators are a single character. For instance, ‘-’ is the operator for negation (with
    * one operand) and the operator for subtraction (with two operands).
    */ 

   /* Some operators are two characters. For example, ‘++’ is the increment operator. Recogni-
    * tion of multicharacter operators works by grouping together as many consecutive characters
    * as can constitute one operator.
    *
    * For instance, the character sequence ‘++’ is always interpreted as the increment operator;
    * therefore, if we want to write two consecutive instances of the operator ‘+’, we must separate
    * them with a space so that they do not combine as one token. Applying the same rule,
    * a+++++b is always tokenized as a++ ++ + b, not as a++ + ++b, even though the latter could
    * be part of a valid C program and the former could not (since a++ is not an lvalue and thus
    * can’t be the operand of ++).
    */

   /* A few C operators are keywords rather than special characters. They include sizeof and _Alignof.
    * Parentheses are also required around the operand of the operator keywords sizeof and
    * _Alignof when the operand is a data type rather than a value.
    */

   /* 5.6 Punctuation
    * The characters ‘;{}[]()’ are used for punctuation and grouping. Semicolon (‘;’) ends a
    * statement. Braces (‘{’ and ‘}’) begin and end a block at the statement level and surround the initializer
    * for a variable with multiple elements or fields (such as arrays or structures).
    *
    * Square brackets (‘[’ and ‘]’) do array indexing, as in array[5].
    *
    * Parentheses are used in expressions for explicit nesting of expressions
    * around the parameter declarations in a function declaration or
    * definition, and around the arguments in a function call, as in printf ("Foo %d\n", i).
    *
    * Several kinds of statements also use parentheses as
    * part of their syntax—for instance, if statements, for statements, while statements, and
    * switch statements.
    */

      // -a + b - c + d * e / f;


   exit (EXIT_SUCCESS);
}
