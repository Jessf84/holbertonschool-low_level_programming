#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if it is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (separators[i] != '\0')
	{
		if (c == separators[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	/* Handle the very first character of the string */
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}

	while (str[i] != '\0')
	{
		/* If current char is a separator, check if next char is lowercase */
		if (is_separator(str[i]))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}

	return (str);
}
