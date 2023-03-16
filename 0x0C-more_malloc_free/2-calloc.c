#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory space at the heap
 *
 * @nmemb: number of elements to allocate memory for
 * @size: size of every element
 *
 * Return: pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);

	if (m == NULL)
		return (NULL);

	f = m;

	for (i = 0; i < (nmemb * size); i++)
		f[i] = '\0';

	return (m);
}
