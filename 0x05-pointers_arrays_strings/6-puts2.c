#include "main.h"

/**
 * puts2 - Entry Point
 *
 * Description: prints a string skip one
 * @str: string - char array
 *
 * Return: void
 */

void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		if (len % 2 == 0)
			_putchar(str[len++]);
		else
			len++;
	_putchar('\n');
}
