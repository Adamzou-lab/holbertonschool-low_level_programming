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
	int number1;
	int number2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	printf("%d\n", number1 * number2);
	return (0);
}
