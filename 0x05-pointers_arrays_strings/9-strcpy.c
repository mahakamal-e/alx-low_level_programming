#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: character
 * @src: character
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	/* to return null byte*/
	int i = -1;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
