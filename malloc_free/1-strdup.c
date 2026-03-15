#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: The string to be duplicated.
 *
 * Description: Allocates memory for a copy of the string str,
 * and copies the content to the new space.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient
 * memory was available or if str is NULL.
 */
char *_strdup(char *str)
{
	int i = 0;
	char *tab;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	tab = malloc((i + 1) * sizeof(char));
	
	if (tab == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
