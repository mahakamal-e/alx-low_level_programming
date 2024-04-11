#include "search_algos.h"
/**
 * jump_search - search using jump search algorithm.
 * @array: pointer to first element in array.
 * @size: size of array.
 * @value: value to search for.
 * Return: index of value or -1 if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, curr, i;

	step = sqrt(size);
	prev = 0;
	curr = step;

	if (array == NULL)
		return (-1);
	printf("Value checked array[%ld] = [%d\n]", prev, array[prev]);
	while (curr < size && array[curr] < value)
	{
		prev = curr;
		curr += step;
		printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, curr);
	for (i = prev; i <= curr && i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}



