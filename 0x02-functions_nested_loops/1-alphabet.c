#include "main.h"
/**
 * print_alphabet - prints all the alphabets in lowercase
 *
 * Return: Return always 0 on success
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');

}
