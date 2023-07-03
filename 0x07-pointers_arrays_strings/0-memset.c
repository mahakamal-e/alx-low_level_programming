#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: Starting address of memory to be filled.
 * @b: Value to be filled
 * @n: Number of bytes to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
