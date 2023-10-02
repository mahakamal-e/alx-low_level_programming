#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: input string
 * @accept: string input to match
 * Return: Returns a pointer to the byte in s
 * that matches one of the bytes in accept
 * or null if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
		i++;
	}
	return (0);
}
