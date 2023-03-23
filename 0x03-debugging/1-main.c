#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10) /* this is infinty lope */
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n"); /* this line not print */

	return (0);
}
