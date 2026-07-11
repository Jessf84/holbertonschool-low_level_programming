#include <stdio.h>

/**
 * main - prints the multiplication table
 * Return: Always 0.
 */
int main(void)
{
	int row, col, res;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			res = row * col;
			printf("%d", res);
			if (col < 9)
			{
				printf("\t");
			}
		}
		printf("\n");
	}
	return (0);
}
