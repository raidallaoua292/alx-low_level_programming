#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * REturn: On success 1.
 *On errore, 1 is returend, and error is set appropriatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
