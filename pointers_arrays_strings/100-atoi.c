#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Description: Parses the string to find the first integer,
 * handling preceding '+' and '-' signs. If no numbers are found,
 * returns 0. Stops parsing when non-digit characters are encountered
 * after the number has started.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int i = 0;
	int signe = 1;
	int resultat = 0;
	int chiffre = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			resultat = resultat * 10 + s[i] - '0';
			chiffre = 1;
			i++;
		}
		else if (s[i] == '-')
		{
			signe = signe * -1;
			i++;
		}
		else if (s[i] == '+')
		{
			i++;
		}
		else
		{
			if (chiffre == 1)
			{
				break;
			}
			i++;
		}
	}
	return (resultat * signe);
}
