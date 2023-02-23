#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int max = b;

	if (a > b)
	{
		max = a;
	}
	else if (c > b)
	{
		max = c;
	}

	return (max);
}
