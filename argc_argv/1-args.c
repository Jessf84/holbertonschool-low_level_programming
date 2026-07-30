#include <stdio.h>

/**
 * main - Print the number of arguments passed into it.
 * @argc: The argument count.
 * @argv: An array of argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
