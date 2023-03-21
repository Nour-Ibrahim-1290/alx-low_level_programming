#include "dog.h"
#include <stdio.h>

/**
 * new_dog - initiate an instant of dog struct
 *
 * @name: dog name string
 * @age: dog age float
 * @owner: dog owner string
 *
 * Return: dog_t instant
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t a_dog;
	dog_t *p_dog;

	p_dog = &a_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	p_dog->name = name;
	p_dog->age = age;
	p_dog->owner = owner;

	return (p_dog);
}
