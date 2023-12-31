#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function used to initialize variables type of dog struct
 * @d: pointer to struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		d = malloc(sizeof(struct dog));
}
