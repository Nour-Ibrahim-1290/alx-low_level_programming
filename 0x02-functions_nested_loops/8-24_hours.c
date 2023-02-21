#include "main.h"

/**
 * jack_bauer - Entry Point
 *
 * Description: Nested Looping
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i, j, k, l;
	int max;

	for (i = 0; i <= 2; i++)
	{
		if (i == 2)
			max = 4;
		else
			max = 10;

		for (j = 0; j < max; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
}
