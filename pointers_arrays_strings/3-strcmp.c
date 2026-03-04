#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Description: Compares two strings character by character.
 * If the strings are equal, it returns 0. Otherwise, it returns
 * the difference between the first pair of characters that differ.
 *
 * Return: The difference s1[i] - s2[i].
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
