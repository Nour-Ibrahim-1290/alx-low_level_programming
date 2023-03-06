#include "main.h"

/**
 * print_chessboard - print 2 d array
 *
 * @a: 2 d array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; i < (int)(sizeof(a)); i++)
	{
		for (j = 0; j < (int)(sizeof(a[i])); j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
