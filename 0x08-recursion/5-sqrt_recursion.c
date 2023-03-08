#include "main.h"

/**
 * _sqrt_recursion - the natural sqrt of a number n
 * if n is not a natural sqrt, the function should return -1
 *
 * @n: number to find its sqrt
 *
 * Return: int.
 */
int isqrt(int k, int n)
{
	int next_k = (k + (n / k)) / 2;

	if (k * k <= n && (k + 1) * (k + 1) > n)
	{
		if (k * k != n)
			return (-1);
		return (k);
	}
	return (isqrt(next_k, n));
}

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (isqrt(1 , n));
}
