#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string to mesure.
 *
 * Return: The lengh of the string.
 */
int _strlen_recurstion(char *s)
{
	/* Base case: If the current character is the nullterminator */
	if (*s == '\0')
	{
		return (0);
	}

	/* Recursibe step: 1 + length of the rest of the string */
	return (1 + _strlen_recursion(s + 1));
}
