#include <stdio.h>
/**
 * main - Entry point for the calculator (Stage 2: Loop and Validation)
 *
 * Return: Always 0.
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

		if (choixOperation < 0 || choixOperation > 4)
		{
			printf("Invalid choice");
		}
	}
	return (0);
}
