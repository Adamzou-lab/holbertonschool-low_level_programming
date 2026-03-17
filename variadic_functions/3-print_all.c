#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Prints anything based on a format string
 * @format: A string containing the types to print:
 *          'c' for char, 'i' for int, 'f' for float, 's' for string
 *          Any other character is ignored
 *
 * Description: Iterates over the format string and prints each argument
 * with the corresponding type, separated by ", ". Strings that are NULL
 * are printed as "(nil)". A newline is printed at the end.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *sep = "";
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				sep = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				sep = ", ";
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
