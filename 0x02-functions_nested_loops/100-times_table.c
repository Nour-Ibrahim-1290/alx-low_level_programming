#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Entry Point
 *
 * @n: Number of Tables
 *
 * Description: Printing N Time Tables
 *
 * Return: void
 */

void lower_n(int n);
void higher_n(int n);

void print_times_table(int n)
{
	if (n > 0 && n < 10)
	{
		higher_n(n);
	}
	else if (n < 15)
	{
		higher_n(n);
	}
}


/**
 * lower_n - print time table when n < 10
 *
 * @n: number of time tables
 *
 * Return: void
 */
void lower_n(int n)
{

	int row, col, product, ones, tens;
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				product = row * col;
				ones = product % 10;
				tens = product / 10;

				if (col == 0)
				{
					_putchar('0');
				}
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(ones + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(tens + '0');
					_putchar(ones + '0');
				}
			}
			_putchar('\n');
		}
}


/**
 * higher_n - print time table when n < 15
 *
 * @n: number of time tables
 *
 * Return: void
 */

void higher_n(int n)
{
	int row, col, product, ones, tens, hunderds;
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				product = row * col;
				ones = product % 10;

				if (col == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(ones + '0');
				}
				else if (product < 100)
				{
					tens = product / 10;
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(tens + '0');
					_putchar(ones + '0');
				}
				else
				{
					tens = ((product % 100) - ones) / 10;
					hunderds = product / 100;
					_putchar(',');
					_putchar(' ');
					_putchar(hunderds + '0');
					_putchar(tens + '0');
					_putchar(ones + '0');
				}
			}
			_putchar('\n');
		}
}
