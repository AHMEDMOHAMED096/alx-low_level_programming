#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * sqr_root - compare the given number to its square
 * @n: the given number
 * Return: return integer
 */

int _sqrt_recursion(int n)
{
	int sqr_root(int sq, int num);
	int num = 0;

	return (sqr_root(n, num));
}

int sqr_root(int sq, int num)
{
	if (num * num == sq)
	return (num);
	else if (num * num > sq)
	return (sqr_root(sq, num + 1));
	else
	return (-1);
}
