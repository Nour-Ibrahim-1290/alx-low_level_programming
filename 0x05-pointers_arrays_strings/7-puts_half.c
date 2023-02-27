#include "main.h"

/**
 * puts_half - Entry Point
 *
 * Description: prints the 2nd half of a string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	unsigned int len, n;

	len = 0;

	/* Extracting the length of string*/
	while (str[len] != '\0')
		len++;

	/*Printing the 2nd half*/
	if (len % 2 == 0)
		n = len / 2;
	else
		n = ((len - 1) / 2) + 1;

	while (str[n] != '\0')
		_putchar(str[n++]);
	_putchar('\n');
}
