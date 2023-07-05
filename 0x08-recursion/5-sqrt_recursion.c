#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number
 * Return: return -1 if number not have square
 */
int square_func(int n, int value);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_func(n, 1));
}
/**
 * square_func - get square value
 * @n: number to get square
 * @value: square root og number
 * Return: int value
 */
int square_func(int n, int value)
{
	if (value * value  == n)
	{
		return (value);
	}
	else if (value * value < n)

	return (square_func(n, value + 1));
}
