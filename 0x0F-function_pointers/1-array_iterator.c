#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - perform an action on every element of arr
 * @array: array to perform actions on
 * @size: size of array
 * @action: pointer to function action
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < (int)size; i++)
			action(array[i]);
	}
}
