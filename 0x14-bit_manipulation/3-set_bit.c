#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: referance of int value
 * @index: given index
 * Return: 1 if it works -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	index = 1L << index;
	*n = *n | index;

	return (1);
}
