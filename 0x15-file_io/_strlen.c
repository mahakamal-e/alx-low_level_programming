#include "main.h"
/**
 * _strlen - get length of str
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int iterat = 0;

	if (!str)
		return (0);
	while (str[iterat] != '\0')
		iterat++;
	return (iterat);
}
