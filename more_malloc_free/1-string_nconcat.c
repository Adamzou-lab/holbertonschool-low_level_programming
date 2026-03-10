#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings up to n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate.
 *
 * Description: If n is greater or equal to the length of s2,
 * then the entire string s2 is used. If NULL is passed,
 * it is treated as an empty string.
 *
 * Return: Pointer to the newly allocated space in memory,
 * or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int bytes;
	char *tab;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		bytes = j;
	else
		bytes = n;
	tab = malloc(i + bytes + 1);
	if (tab == NULL)
		tab = (NULL);
	i = 0;
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < bytes)
	{
		tab[i] = s2[j];
		j++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
