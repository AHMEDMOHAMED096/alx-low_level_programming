#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the charachter %c to stdout
 * @c: the charachter to be printed
 *
 * Always return on success 1.
 * Return -1 on error
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
