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
	int max;

	if (a < b)
	{
		if (b < c)
			max = c;
		else if (c < b)
			max = b;
	}
	else if (a < c)
	{
		if (c < b)
			max = b;
		else if (b < c)
			max = c;
	}
	else
		max = a;

	return (max);
}
