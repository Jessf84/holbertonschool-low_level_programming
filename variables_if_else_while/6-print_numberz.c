#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Loop from 0 to 9 using integer math */
	for (i = 0; i < 10; i++)
	{
		/*
		 * Adding '0' (the integer 48) to the number
		 * converts it to the correct character digit.
		 */
		putchar(i + '0');
	}

	/* Print the final newline character */
	putchar('\n');

	return (0);
}
