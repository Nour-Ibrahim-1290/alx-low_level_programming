#include "main.h"

/**
 * print_sign - Entry Point
 *
 * Description: Check whether a letter is lowercase
 *
 * @n: integer value to check and return its sign
 *
 * Return: 1, 0, or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
