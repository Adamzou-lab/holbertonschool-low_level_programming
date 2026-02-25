#include "main.h"
/**
 * print_line - dessine une ligne droite dans le terminal
 * @n: le nombre de fois que le caractère _ doit être imprimé
 *
 * Return: void (pas de valeur de retour)
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
