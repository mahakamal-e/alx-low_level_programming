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
	int i;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
