#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: Pointer to the input string.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	/* Loop through the string until the null terminator */
	while (str[i] != '\0')
	{
		/* Check if the character is lowercase (between 'a' and 'z') */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Convert to uppercase by subtracting ASCII offset (32) */
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
