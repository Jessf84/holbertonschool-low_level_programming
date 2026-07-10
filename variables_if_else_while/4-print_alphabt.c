#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
  /* Check if the character is NOT 'q' AND NOT 'e' */
	if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
	}

 /* Print the final newline character */
		putchar('\n');

	return (0);
}
