#include "main.h"
/**
 * _strcat - This function appends the src string to the dest string
 * @src: input value
 * @dest: input value
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int s1, s2;

	for (s1 = 0; s1 < dest[s1]; s1++)
		;
	for (s2 = 0; s2 < src[s2]; s2++)
	{
		dest[s1++] = src[s2];
	}
	return (dest);
}
