#include "main.h"
/**
 * is_prime_number - function return 1 if prime number 0otherwise
 *
 * @n: input number
 * Return: 1 if prime
 * otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
		return (0);
	else if (n % n == 0 && n > 0)
		return (1);
	return (is_prime_number(n));
}
