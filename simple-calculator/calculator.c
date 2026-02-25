#include <stdio.h>
#include <stdlib.h>
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
 * soustraction - Subtracts b from a.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Difference of a and b.
 */
double soustraction(double a, double b)
{
	return (a - b);
}
/**
 * multiplication - Multiplies two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Product of a and b.
 */
double multiplication(double a, double b)
{
	return (a * b);
}
/**
 * main - Entry point for the calculator.
 *
 * Return: Always 0.
 */
int main(void)
{
	double n1 = 0, n2 = 0, res = 0;
	int choice = -1;

	while (choice != 0)
	{
		printf("Simple Calculator\n1) Add\n2) Subtract\n");
		printf("3) Multiply\n4) Divide\n0) Quit\nChoice: ");
		if (scanf("%d", &choice) != 1)
			break;
		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}
		if (choice >= 1 && choice <= 4)
		{
			printf("A: ");
			scanf("%lf", &n1);
			printf("B: ");
			scanf("%lf", &n2);
			switch (choice)
			{
			case 1:
				res = addition(n1, n2);
				break;
			case 2:
				res = soustraction(n1, n2);
				break;
			case 3:
				res = multiplication(n1, n2);
				break;
			}
			printf("Result: %g\n", res);
		}
		else
			printf("Invalid choice");
	}
	return (0);
}
