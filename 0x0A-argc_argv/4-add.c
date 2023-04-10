#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");

		return (0);

	}
	for (i = 1; i < argc; i++)
	{

		char *arg = argv[i];

		while (*arg)
	{
		if (*arg < '0' || *arg > '9')
		{
			printf("Error\n");
			return (1);
		}
		arg++;
	}
		int num = atoi(argv[i]);

		if (num > 0)

		{

			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
