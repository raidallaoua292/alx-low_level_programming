#include "main.h"

/**
 *_isalpha - Return 1 if c is a letter. lowercase or uppercase
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _islower(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
