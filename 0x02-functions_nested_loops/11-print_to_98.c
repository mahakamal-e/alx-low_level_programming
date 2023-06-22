#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 *
 * @n: input of function
*/
void print_to_98(int n)
{
	int index;

	if (n <= 98)
		for (index = n; index <= 98; index++)
			printf("%d, ", index);
	else
		for (index = n; n >= 98; index++)
			printf("%d, ", index);
	_putchar('\n');
}
