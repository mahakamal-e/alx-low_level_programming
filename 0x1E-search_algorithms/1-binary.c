#include "search_algos.h"
/**
 * binary_search -  a function that searches for a value in a sorted array,
 *                  using the Binary search algorithm
 * @array: pointer to first element in array.
 * @size: size of array.
 * @value: the value is the value to search for.
 * Return: return index of value,
 *         otherwise if array is NULL return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if ( i < right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}

