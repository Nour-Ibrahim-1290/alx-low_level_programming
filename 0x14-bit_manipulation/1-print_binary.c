#include "main.h"
#include <stdlib.h>

/**
 * print_binary - convert decimal to binary and print it
 * @n: unsigned long int to print in binary format
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
