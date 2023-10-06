#include "main.h"
#include <limits.h>
#include <string.h>
/**
 * _memset - copies the character c (an unsigned char)
 * to the first n characters of the string
 * pointed to, by the argument str.
 * @str: This is a pointer to the block of memory to fill
 * @c: This is the value to be set.
 * @n: number of char copy to c
 *
 * Return: a pointer to the memory area str.
 */
char *_memset(char *str, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		str[i] = c;
	return (str);
}

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size bytes each element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalSize;
	char *p;

	totalSize = nmemb * size;
	p = malloc(totalSize);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, totalSize);
	return (p);
}
