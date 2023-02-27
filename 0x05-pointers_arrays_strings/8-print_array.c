#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry Point
 *
 * Description: prints elemnts of array unti n
 * @a: array of ints
 * @n: member to stop at
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d, ", a[i]);
		printf("%d\n", a[n - 1]);
	}
	else
	{
		printf("\n");
	}
}
