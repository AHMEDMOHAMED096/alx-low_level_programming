#include <stdio.h>

/**
* main: main entry point
* @argc: the number of command line arguments
* @argv: the command line arguments entered
* whatsmyname: prints its name, followed by a new line.
* return: always 0
*/

int main(int argc, char* argv[])
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return(0);
}
