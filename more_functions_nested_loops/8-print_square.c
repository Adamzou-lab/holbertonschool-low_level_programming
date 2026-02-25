#include "main.h"
/**
 * print_square - imprime un carré suivi d'une nouvelle ligne
 * @size: la taille du côté du carré
 *
 * Description: utilise deux boucles pour imprimer des lignes et des colonnes.
 * La variable de largeur est réinitialisée à chaque nouvelle ligne.
 * Return: void
 */
void print_square(int size)
{
	int hauteur;
	int largeur = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (hauteur = 0; hauteur < size; hauteur++)
		{
			while (largeur < size)
			{
				_putchar('#');
				largeur++;
			}
			largeur = 0;
			_putchar('\n');
		}
	}
}
