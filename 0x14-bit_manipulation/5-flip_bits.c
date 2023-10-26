#include "main.h"
/**
 * flip_bits - returns the number of bits to flip
 * @n: int number input
 * @m: second number
 * Return: number of bits you want to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int exclusive_value = n ^ m;
	unsigned int count_bit = 0;

	while (exclusive_value)
	{
		exclusive_value = exclusive_value & (exclusive_value - 1);
		count_bit++;
	}
	return (count_bit);
}
