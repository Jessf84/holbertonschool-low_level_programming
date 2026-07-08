#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
 return (write(1, &c, 1));
}

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
{
		_putchar(ch);
}
	
	_putchar('\n');
	
	return (0);
}
