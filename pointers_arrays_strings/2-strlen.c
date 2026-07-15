#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;
	/* Loop until the character poined to is the null terminator */
	while (s[length] != '\0')
	{
		length++;
	}


	return	(length);
}
