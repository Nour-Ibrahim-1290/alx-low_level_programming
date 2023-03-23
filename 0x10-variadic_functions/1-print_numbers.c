#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print all the agruments given to function
 * with the given separator in place;
 *
 * @separator: separator between numbers while printing
 * @n: number of given arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1;
	va_list arg;

	va_start(arg, n);

	if (separator != NULL)
	{
		while (i < n)
		{
			printf("%d%s", va_arg(arg, int), separator);
			i++;
		}
		printf("%d\n", va_arg(arg, int));

		va_end(arg);
	}
}
