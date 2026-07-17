#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet) speak.
 * @s: Pointer to the input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *s)
{
	int i;
	int j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	/* Loop through each character of the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Match current character against the leet conversion list */
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
	}

	return (s);
}
