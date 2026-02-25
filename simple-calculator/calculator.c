#include <stdio.h>
/**
 * addition - Adds two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Sum of a and b.
 */
double addition(double a, double b)
{
	return (a + b);
}
/**
 * main - Entry point for the calculator (Stage 3: Addition)
 *
 * Return: Always 0.
 */
int main(void)
{
	int choixOperation = -1;
	double nombre1, nombre2, resultat;

	while (choixOperation != 0)
	{
		printf("Simple Calculator\n");
		printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choixOperation) != 1)
			break;

		if (choixOperation == 0)
		{
			printf("Bye!\n");
			break;
		}

		if (choixOperation == 1)
		{
			printf("A: ");
			scanf("%lf", &nombre1);
			printf("B: ");
			scanf("%lf", &nombre2);
			resultat = addition(nombre1, nombre2);
			printf("Result: %g\n", resultat);
		}
		else if (choixOperation < 0 || choixOperation > 4)
		{
			printf("Invalid choice");
		}
	}
	return (0);
}
