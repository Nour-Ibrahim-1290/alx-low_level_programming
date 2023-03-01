#include "main.h"

/**
 * reverse_array - Entry Point
 *
 * Description: reverse the order of an array
 * @a: array to be reversed
 * @n: the number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
