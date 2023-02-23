#include "main.h"

/**
 * print_square - prints chracter '\' n times
 *
 * @n: number of times
 *
 * Return: void
 */

void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < n; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
