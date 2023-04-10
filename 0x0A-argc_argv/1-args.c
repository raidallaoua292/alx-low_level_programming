#include <stdio.h>

/**
 * main - print program name, followed by new line
 * @argc: int
 * @argv: list
 * Return: 0-success, non-zero-fail
 */

int main(int argc, char const *argv[] _attribute_((unused)))
{
	printf("%s\n", argc - 1);
	return (0);
}
