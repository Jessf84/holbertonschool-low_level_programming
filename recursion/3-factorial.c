#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: The factorial of n, or -1 if n is lower then0.
 */
int factorial(int n)
{
	/* Error case: Factorial is not defined for negativen numbers */
	if (n < 0)
	{
		return (-1);
	}


	/* Vase case: Factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}

	/* Recursive step: n * factorial (n - 1) */
	return (n * factorial(n - 1));
}
