#include <stdio.h>
#include <stdlib.h>

constexpr auto word = "Hello, world!\n";

int main(int argc, char * argv[])
{
    /**
     * @NOTE (Especially for C language PRINTF returns):
     *
     * On SUCCESS, is returned the TOTAL NUMBER of written characters.
     * If a writing ERROR occurs, is returned a NEGATIVE number !!!!
     */

   return printf(word) > 0 ? EXIT_SUCCESS : EXIT_FAILURE;

}
