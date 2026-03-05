#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the square matrix.
 * @size: The size of the matrix (width and height).
 *
 * Description: Calculates the sum of the main diagonal (top-left to
 * bottom-right) and the anti-diagonal (top-right to bottom-left).
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int number1 = 0;
	int number2 = 0;
	int i = 0;

	while (i < size)
	{
		number1 += a[i * size + i];
		number2 += a[i * size + (size - 1 - i)];
		i++;
	}
	printf("%d, %d\n", number1, number2);
}
