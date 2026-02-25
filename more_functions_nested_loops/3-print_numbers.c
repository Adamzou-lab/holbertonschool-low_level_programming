#include "main.h"
/**
 * print_numbers - affiche les chiffres de 0 à 9 suivis d'une nouvelle ligne
 *
 * Return: void (pas de valeur de retour)
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
