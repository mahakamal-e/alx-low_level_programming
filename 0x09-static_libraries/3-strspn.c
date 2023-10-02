#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input string
 * @accept: number of bytes
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
		i++;
	}
	return (i);
}
