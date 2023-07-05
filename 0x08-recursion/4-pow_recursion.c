#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first input
 * @y: second input
 * Return: y lower than 0 return -1
 */
int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		return (-1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
