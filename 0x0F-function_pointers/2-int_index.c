#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searche for an integer with a specific charcateristic
 * @array: array of ints to search in
 * @size: size of array
 * @cmp: function to compare with
 *
 * Return: index of matxh or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
