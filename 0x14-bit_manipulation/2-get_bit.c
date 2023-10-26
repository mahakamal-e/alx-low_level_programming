#include "main.h"
/**
 * get_bit - return value of a bit at given index
 * @n: input number
 * @index: input index
 * Return: the value of bit at index
 * otherwise return -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num = 1UL << index;
	unsigned long int r_result = n & num;

	/* check if index is valid */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return (r_result != 0);
}
