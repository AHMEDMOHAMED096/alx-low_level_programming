#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to string of binary number
* Return: the converted number or 0 if error
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	if (b == NULL)
	return (0);

	while (b[i] == '0' || b[i] == '1')
	{
	value <<= 1;
	value += b[i] - '0';
	i++;
	}

	return (value);
}
