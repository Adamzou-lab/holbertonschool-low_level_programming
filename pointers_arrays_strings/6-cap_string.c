#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be modified.
 *
 * Description: Scans the string and capitalizes the first letter
 * of every word. Words are delimited by a specific set of separators:
 * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.
 *
 * Return: Pointer to the modified string s.
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	int separateur = 1;
	char *sep = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0' && str[i] != sep[j])
			j++;
		if (sep[j] != '\0')
			separateur = 1;
		else if (str[i] >= 'a' && str[i] <= 'z' && separateur == 1)
		{
			str[i] -= 32;
			separateur = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && separateur == 0)
			str[i] += 32;
		else
			separateur = 0;
		i++;
	}
	return (str);
}
