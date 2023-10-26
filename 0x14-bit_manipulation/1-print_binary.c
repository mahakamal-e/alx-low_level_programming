#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: input integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = sizeof(unsigned long int) * 8;
	unsigned long int i = 0;

	while (num != 0)
	{
		if (n & 1L << --num)
		{
			_putchar('1');
			i++;
		}
		else if (i != 0)
			_putchar('0');
	}
	if (i == 0)
		_putchar('0');
}
