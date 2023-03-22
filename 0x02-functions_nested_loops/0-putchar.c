#include "main.h"

/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: this programe prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < sizeof(str); ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
