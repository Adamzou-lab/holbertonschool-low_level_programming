#include <stdio.h>
/**
 * main - Entry point for the calculator (Stage 1: Menu and Exit)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choixOperation = -1;

	while (choixOperation != 0)
	{
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choixOperation) != 1)
			break;

		if (choixOperation == 0)
		{
			printf("Bye!\n");
			break;
		}
	}
	return (0);
}
