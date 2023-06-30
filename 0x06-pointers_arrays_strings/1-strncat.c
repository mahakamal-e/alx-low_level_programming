#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: input
 * @src: input
 * @n: input bytes from stc
 * Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int s1, s2;

	for (s1 = 0; s1 < dest[s1]; s1++)
		;
	for (s2 = 0; s2 < n && src[s2] != '\0'; s2++)
	{
		dest[s1 + s2] = src[s2];
	}
	dest[s1 + s2] = '\0';
	return (dest);
}
