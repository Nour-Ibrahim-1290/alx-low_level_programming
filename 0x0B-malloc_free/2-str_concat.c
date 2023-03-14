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
	unsigned int size = 0, i, j;
	char *dup;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		size++;

	for (i = 0; s2[i]; i++)
		size++;

	dup = (char *) malloc(size + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		dup[i] = s1[i];

	for (j = 0; s2[j]; j++)
		dup[i + j] = s2[j];

	dup[size] = '\0';

	return (dup);
}
