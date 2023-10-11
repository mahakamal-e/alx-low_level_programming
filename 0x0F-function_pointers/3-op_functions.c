#include "3-calc.h"

/**
 * op_add - function to add two paramter
 * @a: first input
 * @b: second input
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtracts two paramter
 * @a: first input
 * @b: second input
 *
 * Return: substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function used to multiply
 * @a: first input
 * @b: second input
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function used to calculat division
 * @a: first input
 * @b: second input
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function returns the remainder of division
 * @a: first input
 * @b: second input
 *
 * Return: the reminder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
