#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print all the agruments given to function
 * with the given separator in place;
 *
 * @separator: separator between numbers while printing
 * @n: number of given arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg;
	char *str;

	va_start(arg, n);

	while (i < n)
	{
		str = va_arg(arg, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}

	printf("\n");
	va_end(arg);
}
