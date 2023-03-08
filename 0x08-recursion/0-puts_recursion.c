#include "main.h"

/**
 * _puts_recursion - printing out  a string with recursion.
 *
 * @s: string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
