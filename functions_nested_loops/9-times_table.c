#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int ligne;
	int colonne;
	int resultat = 0;

	for (ligne = 0; ligne <= 9; ligne++)
	{
		for (colonne = 0; colonne <= 9; colonne++)
		{
			resultat = ligne * colonne;

			if (colonne != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (resultat < 10)
			{
				_putchar(' ');
			}

			if (resultat < 10)
			{
				_putchar((resultat % 10) + '0');
			}
			else
			{
				_putchar((resultat / 10) + '0');
				_putchar((resultat % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
