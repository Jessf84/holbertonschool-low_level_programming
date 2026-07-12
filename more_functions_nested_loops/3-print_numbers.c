#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line.
 */
void print_numbers(void)
{
	char i;

	/* First use of _putchar: printing numbers 0-9 */
	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	/* Second use of _putchar: printing the new line */
	_putchar('\n');
}

