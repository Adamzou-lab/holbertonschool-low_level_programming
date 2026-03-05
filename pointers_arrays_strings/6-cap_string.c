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
char *cap_string(char *s)
{
	int i = 0;
	int separateur = 1;
	char *sep = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		int j = 0;

		while (sep[j] != '\0' && s[i] != sep[j])
			j++;
		if (sep[j] != '\0')
			separateur = 1;
		else if (s[i] >= 'a' && s[i] <= 'z' && separateur == 1)
		{
			s[i] -= 32;
			separateur = 0;
		}
		else
			separateur = 0;
		i++;
	}
	return (s);
}
