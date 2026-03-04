#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @s: The string to be encoded.
 *
 * Description: Replaces letters a, A, e, E, o, O, t, T, l, L
 * with 4, 4, 3, 3, 0, 0, 7, 7, 1, 1 respectively.
 *
 * Return: Pointer to the encoded string s.
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char *letters = "aAeEoOtTlL";
	char *replace = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = replace[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
