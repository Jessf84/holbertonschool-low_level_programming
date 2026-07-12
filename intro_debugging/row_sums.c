#include <stdio.h>

/**
 * row_sum - Calculates the sum of products for a single row.
 * @row: The current row number.
 * @cols: The total number of columns.
 *
 * Return: The total sum of the row.
 */
int row_sum(int row, int cols)
{
	int c;
	int sum = 0;

	for (c = 1; c <= cols; c++)
		sum += row * c;

	return (sum);
}

/**
 * total_sum - Calculates the cumulative sum of all rows and columns.
 * @rows: The total number of rows.
 * @cols: The total number of columns.
 *
 * Return: The grand total sum.
 */
int total_sum(int rows, int cols)
{
	int r;
	int total = 0;
	int current = 0;

	for (r = 1; r <= rows; r++)
	{
		current = row_sum(r, cols);
		total += current;
	}

	return (total);
}

/* -- DO NOT Modify the code below this line -- */

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	printf("%d\n", total_sum(3, 3));
	return (0);
}

