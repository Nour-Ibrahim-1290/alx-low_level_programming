#include "main.h"
#include <stdlib.h>

/**
 * array_range - create int array from min to max (included)
 *
 * @min: min of ints in arr
 * @max: max of ints in arr
 *
 * Return: Pointer to arr or NULL
 */

int *array_range(int min, int max)
{
	int size, i;
	int *arr;

	if (min > max)
		return (NULL);

	if (min < 0 && max < 0)
		size = (min * -1) - (max * -1) + 1;
	else if (min < 0)
		size = max + (min * -1) + 1;
	else if (max < 0)
		size = (max * -1) + min + 1;
	else
		size = max - min + 1;

	arr = malloc(sizeof(*arr) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
