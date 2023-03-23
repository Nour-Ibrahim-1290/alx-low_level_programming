#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the agruments given to function
 *
 * @n: number of given arguments
 *
 * Return: sum int.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 1;
	int sum = 0;
	va_list arg;

	va_start(arg, n);

	while (i <= n)
	{
		sum += va_arg(arg, int);
		i++;
	}
	return (sum);
}
