#include <stdio.h>
#include <stdlib.h>

/**
 * check_num - checks if a string contains only digits
 * @str: the string to check
 *
 * Return: 0 if all digits, 1 if non-digit found
 */
int check_num(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * main - adds positive numbers passed as command line arguments
 * @argc: the number of command line arguments
 * @argv: and array containing the comand line arguments
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	i = 1;

	while (i < argc)
	{
		if (check_num(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
