#include <unistd.h>

/**
 * _putchar - writes the charachter %c to stdout
 * %c the charachter to be printed
 *
 * Always return on success 1.
 */
int _putchar (char c);
{

	return (write(1, &c, 1));
}
