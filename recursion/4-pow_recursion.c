#include "main.h"

/**
 * _pow_recursion - Returns the calue of x raised to the pwoer of y.
 * @x: The case interger.
 * @y: The exponent power.
 *
 * Return: The result of x^y, or -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	/* Error case: Exponents lower than 0 return -1 */
	if (y < 0)
	{
		return (-1);
	}

	/* Base case: Any number to the power of 0 is 1 */
	if (y == 0)
	{
		return (1);
	}

	/* Recursive step: x multiplied vy (x to the power of y - 1) */
	return (x * _pow_recursion(x, y - 1));
}
