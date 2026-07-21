#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 *         or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	i = 0;
	while (i <= len)
	{
		duplicate[i] = str[i];
		i++;
	}

	return (duplicate);
}
