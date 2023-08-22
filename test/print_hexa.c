#include "main.h"
/**
* print_hexa - prints hexadecimal numbers to stdout according to its casespeifier
* @count: detects number of characters to be printed on stdout
* @n: given number by variadic arguments list
* @base: the base of given number
* @casespecifier: to differentiate between uppercase and lowercase
* return: return int
*/

int print_hexa(long n, int base, char caseSpecifier)
{
	int count = 0;
	char symbolsLower[] = "0123456789abcdef";
	char symbolsUpper[] = "0123456789ABCDEF";
	char* symbols = (caseSpecifier == 'x') ? symbolsLower : symbolsUpper;
	if (n < 0)
	{
		write(1, "-", 1);
		return print_hexa(n * -1, base, caseSpecifier) + 1;
	}
	else if (n < base)
	return _putchar(symbols[n]) + 1;
	else
	{
		count = print_hexa(n / base , base, caseSpecifier);
		return count + print_hexa(n % base, base, caseSpecifier);
	}

}