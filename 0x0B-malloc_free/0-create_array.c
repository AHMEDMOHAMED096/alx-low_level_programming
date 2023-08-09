#include "main.h"

/**
* *create_array - creates an array of chars,
* and initializes it with a specific char.
* @c: the char to be initialized
* @size: the size of the memory to print
* Return: return Null if it fails
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr = malloc(size * sizeof(char));
if (arr == 0 || size == 0)
return (0);
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}



