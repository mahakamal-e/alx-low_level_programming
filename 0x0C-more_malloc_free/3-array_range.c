#include "main.h"
/**
 * array_range - a function that creates an array of integers.
 * @min : min range value
 * @max: max range value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array_n;
	int iterat;
	int length;

	if (min < max)
		return (NULL);
	length = mix - min + 1;
	array_n = malloc(length * sizeof(int));

	if (array_n == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		array_n[i] = min + i;

	return (array_n);
}
