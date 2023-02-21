#include "main.h"
#include <stdio.h>

/**
 * times_table - Entry Point
 *
 * Description: Printing Time Tables from 0 up to 9
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, product, ones, tens;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			ones = product % 10;
			tens = product / 10;

			if (j == 0)
				_putchar('0');
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}

		_putchar('\n');
	}
}
