#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given
 *  as a parameter on each element of an array
 *
 * @array: array
 * @size: unsigned int type take result of size of
 * size of that size you get for array
 * @action: poiter to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*pointer point at the end of the array  */
	/* and to get the end of the array we get the address of array */

	int *ptr_end_arr = array + size - 1;

	if (array != NULL && action != NULL)
		while (array <= ptr_end_arr)
		{
			/* in actionget the value of this place of address */
			action(*array++);
		}
}
