#include "main.h"

/**
 * _abs - Entry Point
 *
 * Description: Return the absolute value of an interger
 *
 * @n: integer value to check and return its sign
 *
 * Return: 1, 0, or -1
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1 * n);
	}
}
