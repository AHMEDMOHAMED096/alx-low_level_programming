#include "main.h"

/*
* *create_array - creates an array of chars,
* and initializes it with a specific char.
* @c: the char to be initialized
* @size: the size of the memory to print
* Return: return Null if it fails
*/

char *create_array(unsigned int size, char c)
{
int n;
create_array = (char *)malloc(n * sizeof(char));
if (create_array == 0)
return (0);
create_array[size] = c;
return (create_array);

}



