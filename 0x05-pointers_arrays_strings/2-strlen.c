#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: input string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int str_count = 0;

	while (str_count != '\0')
	{
		str_count++;
		s++;
	}
	return (str_count);
}
