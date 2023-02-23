#include "main.h"
#include <stdio.h>

/**
 * print_number - print integer with _putchar only
 *
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int ones, tens, hunds, thous;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	ones = n % 10;

	if (n >= 1000)
	{
		tens = ((n % 100) - ones) / 10;
		hunds = ((n % 1000) - tens - ones) / 100;
		thous = n / 1000;
		_putchar(thous + '0');
		_putchar(hunds + '0');
		_putchar(tens + '0');
		_putchar(ones + '0');
	}
	else if (n >= 100)
	{
		tens = ((n % 100) - ones) / 10;
		hunds = n / 100;
		_putchar(hunds + '0');
		_putchar(tens + '0');
		_putchar(ones + '0');
	}
	else if (n >= 10)
	{
		tens = n / 10;
		_putchar(tens + '0');
		_putchar(ones + '0');
	}
	else
	{
		_putchar(ones + '0');
	}
}
