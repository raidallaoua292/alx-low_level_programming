#include "main.h"

/**
 *_isalpha - Short description, single line
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	if (c > 'A' && c < 'Z')
        {
                return (1);
        }

	else
	{
		return (0);
	}
}
