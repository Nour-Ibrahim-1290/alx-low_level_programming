#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check and validate malloc
 *
 * @b: size to allocate
 *
 * Return: 98 or pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
