#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print a dog struct object
 *
 * @d: pointer to dog struct instant
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)");
	else
	{
		d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		d->owner == NULL ? printf("Owner: (nil)") : printf("Owner: %s", d->owner);
		printf("\n");
	}
}
