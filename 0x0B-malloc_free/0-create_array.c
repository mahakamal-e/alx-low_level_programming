#include "main.h"
/**
 * *create_array - a function that creates an array of chars
 * @size: array size
 * @c: character input
 * Return: eturns a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	/*creat pointer in type character*/
	char *cha = malloc(sizeof(char) * size);

	if (size == 0 || cha == NULL)
		return (NULL);

	while (size--)
		cha[size] = c;
	return (cha);
}
