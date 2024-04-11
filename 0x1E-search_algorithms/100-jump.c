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
	size_t start = 0, end, i;
	size_t jump = sqrt(size);
	
	if (!array)
		return (-1);
	while (start < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		end = start + jump;
		if (end >= size)
			end = size - 1;
		if (value >= array[start] && value <= array[end])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", start, end);
			for (i = start; i <= end; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
		}
		start += jump;
	}
	return (-1);
}
