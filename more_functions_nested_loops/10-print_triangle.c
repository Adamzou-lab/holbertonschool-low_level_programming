#include "main.h"
/**
 * print_triangle - imprime un triangle suivi d'une nouvelle ligne
 * @size: la taille du triangle
 *
 * Description: dessine un triangle aligné à droite en utilisant des
 * espaces et le caractère '#'. Si size est inférieur ou égal à 0,
 * n'imprime qu'une nouvelle ligne.
 */
void print_triangle(int size)
{
	int hauteur;
	int espace;
	int diese;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (hauteur = 0; hauteur < size; hauteur++)
		{
			espace = 0;
			while (espace < (size - hauteur - 1))
			{
				_putchar(' ');
				espace++;
			}
			diese = 0;
			while (diese < (hauteur + 1))
			{
				_putchar('#');
				diese++;
			}
			_putchar('\n');
		}
	}
}
