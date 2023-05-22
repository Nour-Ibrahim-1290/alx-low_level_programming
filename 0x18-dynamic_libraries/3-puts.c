#include "main.h"

/**
 * _puts - Entry Point
 *
 * Description: prints a string
 * @str: string - char array
 *
 * Return: void
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len++]);
	}
	_putchar('\n');
}
