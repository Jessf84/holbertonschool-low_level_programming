#include <stdio.h>

/**
 * main - Print all arguments it receives, one per line.
 * @argc: The argument count.
 * @argv: An array of argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
