#include "main.h"
/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to an array of 8 characters (the board).
 *
 * Description: Iterates through a 2D array of fixed size 8x8
 * and prints each character followed by a new line for each row.
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
