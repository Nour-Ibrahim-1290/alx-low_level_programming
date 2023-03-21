#include "dog.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * _strlen - find the length of a string
 * @str: string
 *
 * Return: int length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}


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
	dog_t *a_dog;
	int nl = 0, ol = 0;

	a_dog = malloc(sizeof(struct dog));

	if (a_dog == NULL)
		return (NULL);

	if (name == NULL || owner == NULL)
		return (NULL);

	nl = _strlen(name);
	ol = _strlen(owner);

	a_dog->name = malloc(sizeof(char) * nl + 1);
	if (a_dog->name == NULL)
	{
		free(a_dog);
		return (NULL);
	}

	a_dog->owner = malloc(sizeof(char) * ol + 1);
	if (a_dog->owner == NULL)
	{
		free(a_dog->name);
		free(a_dog);
		return (NULL);
	}

	while (nl-- >= 0)
		a_dog->name[nl] = name[nl];
	a_dog->age = age;

	while (ol-- >= 0)
		a_dog->owner[ol] = owner[ol];

	return (a_dog);
}
