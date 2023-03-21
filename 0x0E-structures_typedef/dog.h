#ifndef DOG
#define DOG

/**
 * struct dog - define a structure of dog charactaristics
 *
 * @name: character string
 * @age: integer
 * @owner: character string
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *, char *, float, char *);

#endif
