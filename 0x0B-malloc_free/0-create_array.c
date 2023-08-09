#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/*
* create_array - A function pointer creates an array of chars
* @buffer: the address of memory to print
* @size: the size of the memory to print
* Return: return Null if it fails
*/

char *create_array(unsigned int size, char c)
{
unsigned int n;

create_array = (char *)malloc(n * sizeof(char));
if (create_array == 0)
{
printf("failed to allocate memory\n");
exit(0);
}
free(create_array);
}



