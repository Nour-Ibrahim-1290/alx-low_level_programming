#include "main.h"

/**
 * print_rev - Entry Point
 *
 * Description: prints a string in reverse
 * @s: string - char array
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	len = len - 1;
	while (len != -1)
		_putchar(s[len--]);

	_putchar('\n');
}
