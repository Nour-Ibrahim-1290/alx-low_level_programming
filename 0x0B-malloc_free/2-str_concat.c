#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate 2 strings into a new one
 *
 * @s1: string to concatenate
 * @s2: string to concatenate
 *
 * Return: Pointer to the new string or NULL if it fails (size is 0)
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size, size1, size2;
	char *dup;
	unsigned int i;

	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);
	else if (s1 == NULL)
	{
		size1 = 0;
		size2 = strlen(s2);
	}
	else if (s2 == NULL)
	{
		size1 = strlen(s1);
		size2 = 0;
	}
	else
	{
		size1 = strlen(s1);
		size2 = strlen(s2);
	}

	size = size1 + size2 + 1;
	dup = (char *) malloc(size);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		dup[i] = s1[i];

	for (i = 0; i <= size2; i++)
		dup[i + size1] = s2[i];

	return (dup);
}
