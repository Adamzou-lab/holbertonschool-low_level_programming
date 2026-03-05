#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing the list of characters to match.
 *
 * Description: Calculates the number of bytes in the initial segment
 * of s which consist entirely of bytes from accept.
 *
 * Return: The number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int count = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (count);
		}
		else
		{
			count++;
		}
		i++;
	}
	return (count);
}
