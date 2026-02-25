#include "main.h"
/**
 * print_diagonal - dessine une ligne diagonale dans le terminal
 * @n: le nombre de fois que le caractère \ doit être imprimé
 *
 * Description: utilise des boucles imbriquées pour ajouter des espaces
 * avant chaque slash afin de créer un effet de diagonale.
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
