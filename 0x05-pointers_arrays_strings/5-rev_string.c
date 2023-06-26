#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input of string
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	while (i < length)
	{
		length--;
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
		i++;
	}
}
