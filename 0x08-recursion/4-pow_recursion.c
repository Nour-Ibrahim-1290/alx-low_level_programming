#include "main.h"

/**
 * _pow_recursion - return the factorial of an int
 *
 * @x: int base
 * @y: int power
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
