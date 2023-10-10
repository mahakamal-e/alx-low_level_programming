#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that frees dogs.
 * @d: struct from dog to free memory allocated
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
