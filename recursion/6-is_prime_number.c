#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* numbers less than or equal to 1 are not prime*/
	if (n <= 1)
	{
		return (0);
	}

	/* Start checking for factors beginning with divisor 2 */
	return (actual_prime(n, 2));
}

/**
 * actual_prime - Recursively checks if a number has dvisor.
 * @n: The numver to check.
 * @i: The current divisor to test.
 *
 * Return: 1 if prime, 0 if divisible.
 */
int actual_prime(int n, int i)
{
	/* Base case 1: If i squared greater than n, no divisors found (it's prime) */
	if (i * i > n)
	{
		return (1);
	}

	/* Base case 2: If n is evenly divisible by i, it's not prime */
	if (n % i == 0)
	{
		return (0);
	}

	/* Recursive step: Test the nect divisor */
	return (actual_prime(n, i + 1));
}
