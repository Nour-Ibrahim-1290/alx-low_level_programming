#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 9
 *
 * Return: void
 */

void more_numbers(void)
{
	int count, i, ones, tens;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			ones = i % 10;
			tens = i / 10;

			if (i > 9)
				_putchar('0' + tens);

			_putchar('0' + ones);

		}
		_putchar('\n');
	}
}
