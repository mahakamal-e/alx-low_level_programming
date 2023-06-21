#include "main.h"
/**
 * _isalpha - function checks if c is a letter, lowercase or uppercase
 *
 * @c: input checks
 *
 * Return: return 1 if c is character and return 0 if not
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
