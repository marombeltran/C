/* day-006-samples -- source code for day-006
 * 2023 Free Software Foundation, Inc.
 */ 

#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
    /* • A separator separates tokens. White space (see next section) is a separator, but it is not a
     *   token.
     */
        int a, b;
        a = 3; // white space as element's separator
        b = 4;
 
    // Remenber: white space is not a token
        a + b;

    /* • The other separators are all single-character tokens themselves:
     * ( ) [ ] { } ; , . :
     */

    /* 1.6 White Space
     * • White space is the collective term used for several characters: the space character, the tab
     *   character, the newline character, the vertical tab character, and the form-feed character.
     *
     * • White space is ignored (outside of string and character constants), and is therefore optional,
     *   except when it is used to separate tokens.
     */

        // that ..
        printf ( "hello, world\n" );

        // ..is the same this. It doesn't matter.
        printf("hello, world\n");
    
    /* • Although you must use white space to separate many tokens, no white space is required
     *   between operators and operands
     */
        int x = 1;
        x++;
        x ++ ; 

        x
            ++
                ;

    exit (EXIT_SUCCESS);
 }
 
