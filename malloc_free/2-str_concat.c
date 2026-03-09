#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Description: Allocates memory for a new string which contains s1
 * followed by s2, and terminated by a null byte.
 *
 * Return: Pointer to the newly allocated space, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *tab;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	tab = (char *) malloc((i + j + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;

	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		tab[i] = s2[j];
		i++;
		j++;
	}
	tab[i] = '\0';
	return (tab);
}
