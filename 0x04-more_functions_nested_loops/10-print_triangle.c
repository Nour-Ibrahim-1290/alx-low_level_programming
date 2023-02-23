#include "main.h"

/**
 * print_triangle - prints triangles with #
 *
 * @n: number of times
 *
 * Return: void
 */

void print_triangle(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			for (j = i; j > 0; j--)
				_putchar(' ');
			for (k = n; k >= i; k--)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
