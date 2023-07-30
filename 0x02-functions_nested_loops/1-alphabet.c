#include "main.h"
/**
 * main - Entry point
 *
 * A function that prints the alphabet, in lowercase, followed by a new line.
 * Return: Return always 0 on success
 *
 */

void print_alphabet(void);
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');

}
