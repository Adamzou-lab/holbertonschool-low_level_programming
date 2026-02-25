#include <stdio.h>
/**
 * row_sum - Computes the sum of a specific row in a multiplication table.
 * @row: The row number to calculate.
 * @cols: The number of columns (how many multiples to sum).
 *
 * Return: The sum of the multiples for that row.
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
 * total_sum - Calculates the sum of all values in a multiplication table.
 * @rows: Number of rows in the table.
 * @cols: Number of columns in the table.
 *
 * Return: The total sum of all elements in the rows x cols table.
 */
int total_sum(int rows, int cols)
{
	int r;
	int total = 0;

	for (r = 1; r <= rows; r++)
	{
		total += row_sum(r, cols);
	}
	return (total);
}
/* -- DO NOT Modify the code below this line -- */
/**
 * main - Entry point, tests the total_sum function.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%d\n", total_sum(3, 3));
	return (0);
}
