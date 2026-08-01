#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 *  _sqrt_recursion - Returns the natural square root of a number.
 *  @n: The numver to find the square root of.
 *
 *  Return: The natural square root, or -1 if none exisits.
 */
int _sqrt_recursion(int n)
{
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Recursively checks for the natural square root.
 * @n: The numver to check against.
 * @i: The current iterator/guess to test.
 *
 * Return: The natural square root, or -1 if none exists.
 */
int actual_sqrt_recursion(int n, int i)
{
	/* Base case 1: if i squared is greater than n, no natural root exists */
	if ((i * i) > n)
	{
		return (-1);
	}

	/* Base case 2: if i squared equals n, we found our natural square root */
	if ((i * i) == n)
	{
		return (i);
	}

	/* Recursive step: Increment our guess (i) and try again */
	return (actual_sqrt_recursion(n, i + 1));
}
