#include "main.h"
/**
 * rev_string - Reverse a string.
 * @s: Pointer to the string to print.
 * 
 * Description: Take a string as parameters and
 * reverse it.
 * 
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int i, j;
	int longueur = 0;
	char temp;
	while (s[longueur] != '\0')
	{
		longueur++;
	}
	
	i = 0;
	j = longueur - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}	
}
