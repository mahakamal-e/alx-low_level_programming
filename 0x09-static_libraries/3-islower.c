#include "main.h"
/**
 * _islower - checks for lowercase character.
 *
 * @c: checkes input value of function
 *
 * Return: 0 if c value is lowercase or return zero if not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
