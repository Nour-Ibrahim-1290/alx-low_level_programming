#include "main.h"

/**
 * factorial - return the factorial of an int
 *
 * @n: int to factorize
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
