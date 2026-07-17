#include "main.h"

/**
 * _strcmp - Compares two strings character by character.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: The difference between the first non-matching characters,
 *         or 0 if the strings are identical.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Loop through both strings until a mismatch or a null terminator */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	/* Handle cases where one string is a substring of the other */
	return (s1[i] - s2[i]);
}
