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
	if (a < b)
	{
		if (b < c)
			return (c);
		else if (c < b)
			return (b);
	}
	else if (a < c)
	{
		if (c < b)
			return (b);
		else if (b < c)
			return (c);
	}
	else
		return (a);

	return (0);

}
