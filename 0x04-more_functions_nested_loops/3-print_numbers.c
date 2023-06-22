#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 *
*/
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
