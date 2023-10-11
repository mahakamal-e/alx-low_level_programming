#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* iterate vatiable it will be the index */
	int iterat;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (iterat = 0; iterat < size; iterat++)
	{
		if (cmp(array[iterat]))
			return (iterat);
	}

	return (-1);
}
