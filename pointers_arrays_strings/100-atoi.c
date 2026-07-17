#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the input string.
 *
 * Return: The integer value of the converted string, or 0 if no digits.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	int digit_found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit_found = 1;

			if (sign == 1)
			{
				res = (res * 10) + (s[i] - '0');
			}
			else
			{
				res = (res * 10) - (s[i] - '0');
			}
		}
		else if (digit_found)
		{
			break;
		}
		i++;
	}

	return (res);
}
