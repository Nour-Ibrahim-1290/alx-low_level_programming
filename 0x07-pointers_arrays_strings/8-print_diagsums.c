#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the diagonals of
 * a square matrix
 *
 * @a: 2 d array
 * @size: size of array (number of rows)
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += (a + i * size)[i];
		sum2 += (a + i * size)[size - i - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}
