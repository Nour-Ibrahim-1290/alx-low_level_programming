#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string and return pointer
 * to its where abouts
 *
 * @str: string to copy
 *
 * Return: Pointer to the array or NULL if it fails (size is 0)
 */

char *_strdup(char *str)
{
	unsigned int size = sizeof(str) - 1;
	char *dup = (char *) malloc(size);
	unsigned int i;

	if ((str == NULL) || (dup == NULL))
		return (NULL);

	for (i = 0; i < size; i++)
		dup[i] = str[i];

	return (dup);
}
