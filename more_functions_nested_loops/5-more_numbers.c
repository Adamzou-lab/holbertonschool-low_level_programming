#include "main.h"
/**
 * more_numbers - affiche les nombres de 0 à 14 une dizaine de fois
 *
 * Return: void (pas de valeur de retour)
 */
void more_numbers(void)
{
	int rows = 0;
	int i;

	while (rows < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		rows++;
		_putchar('\n');
	}
}
