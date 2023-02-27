#include "main.h"

/**
 * swap_int - Entry Point
 *
 * Description: resets an int to value 98
 * @a: pointer to integer 1
 * @b: pointer to integer 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
