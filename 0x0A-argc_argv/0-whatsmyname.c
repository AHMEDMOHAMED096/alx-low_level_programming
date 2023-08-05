#include <stdio.h>

/**
* main - entry point
* whatsmyname - prints its name, followed by a new line.
* return: always 0
*/

int main(int argc, char* argv[])
{
    int i;
    printf("%d\n",argc);
    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i ,argv[i]);
    }
}