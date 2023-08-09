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
char *arr = malloc(size);
if (arr == 0)
return (0);
arr[size] = c;
return (arr);

}



