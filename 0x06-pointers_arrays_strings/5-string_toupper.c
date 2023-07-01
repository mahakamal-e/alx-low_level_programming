#include "main.h"
/**
 * string_toupper - that changes all lowercase letters of a string to uppercase
 * @src: string input
 * Return: string in uppercase
 */
char *string_toupper(char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (src[i] >= 'a' && src[i] <= 'z')
			src[i] = src[i] - 32;
		i++;
	}
	return (src);
}
