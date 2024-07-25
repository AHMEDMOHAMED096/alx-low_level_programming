#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input is a prime number
 * @n: the given number to be checked
 * Return: return the prime number
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	for (i = 2; i < n - 1; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
