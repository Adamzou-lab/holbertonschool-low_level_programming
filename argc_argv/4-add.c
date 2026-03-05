#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the number of arguments passed into it.
 * @argc: The number of command line arguments.
 * @argv: An array containing the program command line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int total;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	total = 0;
	i = 1;
	while (i < argc)
	{
		total += atoi(argv[i]);
		i++;
	}
	printf("%d\n", total);
	return (0);
}
