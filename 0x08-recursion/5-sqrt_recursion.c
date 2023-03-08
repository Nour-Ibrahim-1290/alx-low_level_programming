#include "main.h"


/**
 * isqrt - where the recursion process actually happens
 *
 * @n: number to get sqrt for.
 * @k: the sqrt
 *
 * Return: int
 */

unsigned long isqrt(unsigned long k, unsigned long n)
{
	unsigned long next_k = (k + (n / k)) / 2;

	if (k * k <= n && (k + 1) * (k + 1) > n)
	{
		if (k * k != n)
			return (-1);
		return (k);
	}
	return (isqrt(next_k, n));
}

/**
 * _sqrt_recursion - Entry Point
 *
 * Description: the natural sqrt of a number n
 * if n is not a natural sqrt, the function should return -1
 * @n: number to find its sqrt
 *
 * Return: int.
 */

int _sqrt_recursion(int n)
{
	unsigned long m = n;

	if (n <= 0)
		return (-1);
	return ((int)isqrt(1, m));
}
