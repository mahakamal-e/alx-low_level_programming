#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @n: input of function
 *
 * Return: last digit
*/
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = n % 10;
	else
		lastdigit = n % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
