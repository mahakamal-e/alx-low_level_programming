#include "main.h"
/**
 * binary_to_uint - convert a binary to an int
 * @b: character to print (binary)
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int  i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		number = number * 2 + (b[i] - '0');
		i++;
	}
	return (number);
}
