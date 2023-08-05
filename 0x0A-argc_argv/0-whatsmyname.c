#include <stdio.h>

/**
* main: Entry point
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
        printf("argv[%d] = %s\n", i ,argv[i]);
    }
}