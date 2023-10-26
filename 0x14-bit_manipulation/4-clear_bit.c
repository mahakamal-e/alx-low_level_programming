#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: refeance to int
 * @index: given index
 * Return: 1 if works -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	index = ~(1 << index);

	*n = *n & index;
	return (1);
}
