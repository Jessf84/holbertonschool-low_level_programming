#include <unistd.h>

/**
 * _putchar - Writes one character to standard output
 * @c: Character to write
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
