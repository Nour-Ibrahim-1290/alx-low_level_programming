#include "main.h"

/**
 * print_alphabet_x10 - Entry Point
 *
 * Description: write all lowercase alphabet using
 * only _putchar twice
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		_putchar('\n');
	}
}
