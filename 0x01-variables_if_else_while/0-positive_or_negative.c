#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: this programe print the signal n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)

		printf("%d is postive", n);

	else if (n < 0)

		printf("%d is negative", n);

	else
		printf("%d is zero", n);

	return (0);
}
