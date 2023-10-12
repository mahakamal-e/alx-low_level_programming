#include "variadic_functions.h"
/**
 * sum_them_all - sum of all parameters
 *
 * @n: number of paramters
 * @...: paramters to calculate sum for
 *
 * Return: the sum
 * If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum;
	unsigned int iterat;

	if (n <= 0)
		return (0);
	va_start(ptr, n);

	sum = 0;
	for (iterat = 0; iterat < n; iterat++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
