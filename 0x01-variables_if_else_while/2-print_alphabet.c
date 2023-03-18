#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: this programe print alphabet lowercases
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int str;

	for (str = 'a'; str <= 'z'; str++)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
}
