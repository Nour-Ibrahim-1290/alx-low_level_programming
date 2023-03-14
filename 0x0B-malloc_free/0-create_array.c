#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of the array
 * @c: char to fill the array with
 *
 * Return: Pointer to the array or NULL if it fails (size is 0)
 */

char *create_array(unsigned int size, char c)
{
	char *arr = (char *) malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
