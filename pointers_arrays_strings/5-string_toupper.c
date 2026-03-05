#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: Pointer to the string to be modified.
 *
 * Description: Iterates through each character of the string. If a
 * character is a lowercase letter (between 'a' and 'z'), it converts
 * it to uppercase by subtracting 32 from its ASCII value.
 *
 * Return: Pointer to the modified string s.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
