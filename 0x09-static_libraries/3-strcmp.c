#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: first input of string
 * @s2: second input of string
 * Return: return i0 if string are equal
 * < 0 if sring first grater in ascii
 * > 0 if first character less than scond
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
