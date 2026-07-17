#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the input string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int len = 0;
	int start;

	/* Find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Calculate the starting index for the second half */
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len + 1) / 2;
	}

	/* Print the characters from the starting index to the end */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
