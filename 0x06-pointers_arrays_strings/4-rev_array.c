#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array.
 * @a: array of integer
 * @n:number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
