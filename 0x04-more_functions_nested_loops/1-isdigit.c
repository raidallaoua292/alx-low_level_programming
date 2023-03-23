#include "main.h"

/**
 *_isdigit - Short description, single line
 * @c: contains value to be compared
 * Return:  1 if c is digit ,0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
