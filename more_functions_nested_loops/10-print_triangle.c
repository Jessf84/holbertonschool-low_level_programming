#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int row, col, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		/* Print spaces: size minus current row */
		for (spaces = size - row; spaces > 0; spaces--)
			_putchar(' ');

		/* Print hashes: current row count */
		for (col = 0; col < row; col++)
			_putchar('#');

		_putchar('\n');
	}
}
