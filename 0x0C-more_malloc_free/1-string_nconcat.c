#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings into a new one
 *
 * @s1: string to concatenate
 * @s2: string to concatenate till n
 * @n: len to stop at in s2
 *
 * Return: Pointer to the new string or NULL if it fails (size is 0)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size = 0, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s2[i]; i++)
		size++;

	if (size > n)
		size = n;

	for (i = 0; s1[i]; i++)
		size++;

	concat = (char *) malloc(size + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];

	for (j = 0; j < n && s2[j]; j++)
		concat[i + j] = s2[j];

	concat[size] = '\0';

	return (concat);
}
