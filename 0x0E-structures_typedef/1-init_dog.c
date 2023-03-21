#include "dog.h"

/**
 * init_dog - initiate an instant of dog struct
 *
 * @d: pointer to dog struct instant
 * @name: dog name string
 * @age: dog age float
 * @owner: dog owner string
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
