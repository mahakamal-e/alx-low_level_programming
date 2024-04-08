#include "search_algos.h"
/**
 * liner_search - a function that searches for a value in an array of integers,
 *                using liner search algorithm.
 * @array: pointer to first element in array.
 * @size: size of array.
 * @value: the value to search for.
 *
 * Return: Return the index where value is located.
 *         otherwise if array is NULL return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
