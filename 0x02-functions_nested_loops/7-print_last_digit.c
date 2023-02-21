#include "main.h"

/**
 * print_last_digit - Entry Point
 *
 * Description: Print last digit of an Int
 *
 * @n: integer value
 *
 * Return: value of the last digit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(((n % 10) * -1) + '0');
		return ((n % 10) * -1);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}
