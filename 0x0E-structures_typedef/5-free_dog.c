#include "dog.h"
#include <stdio.h>
/**
 * free_dog - free a dog struct instance
 *
 * @d: pointer to dog struct instant
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
