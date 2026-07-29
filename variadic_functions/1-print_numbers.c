#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: Nothing.
 */
void print_numbers(const car *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;


	va_start(args, n);

	i = 0;

	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");

	va_end(args);
}
