#include "main.h"

/**
 * print_alphabet - Entry Point
 *
 * Description: write all lowercase alphabet using
 * only _putchar twice
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar((char)i);

	_putchar('\n');
}
