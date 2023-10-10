#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog - a function that creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int f_length;
	int s_length;

	f_length = strlen(name);
	s_length = strlen(owner);

	dog = (dog_t *) malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (f_length + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (s_length + 1));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
