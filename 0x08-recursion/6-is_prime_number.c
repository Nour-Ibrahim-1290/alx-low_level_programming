#include "main.h"

/**
 * is_prime - this is where recursion happens
 * @n: number
 * @i: half of n
 *
 * Return: int flag
 */

int is_prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i == n / 2)
		return (1);
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - Entry point
 *
 * @n: a number to check if prime
 *
 * Return: int flag.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_prime(n, 2));
}
