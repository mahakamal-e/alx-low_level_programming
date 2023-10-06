#include "main.h"
#include <limits.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size bytes each element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalSize;
	void *p;

	totalSize = nmemb * size;
	p = malloc(totalSize);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (p == NULL)
		return (NULL);

	memset(p, 0, totalSize);
	return (p);
}
