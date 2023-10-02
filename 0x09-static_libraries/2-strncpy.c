#include "main.h"
/**
 * _strncpy -  a function that copies a string.
 * @dest: input destination
 * @src: input source
 * @n: byte input of src
 * Return: copy of string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* iterate through src array*/
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
