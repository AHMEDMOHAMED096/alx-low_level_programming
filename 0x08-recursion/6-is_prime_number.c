#include "main.h"

/**
 * is_prime_rec - recursion function for checking for prime number
 * @n: the given number to be checked
 * @divisor: starting from 2
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_rec(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_rec(n, divisor + 1));
}

/**
 * is_prime_number - function that returns 1 if the input is a prime number
 * @n: the given number to be checked
 * Return:  1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime_rec(n, 2));
}
