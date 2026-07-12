#include "main.h"

/**
 * print_most_numbers - prints the numbers 0-9, excluding 2 and 4,
 * followed by a new line.
 */
void print_most_numbers(void)
{
	char i;

	/* First use of _putchar: printing selected numbers */
	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}

	/* Second use of _putchar: printing the new line */
	_putchar('\n');
}
