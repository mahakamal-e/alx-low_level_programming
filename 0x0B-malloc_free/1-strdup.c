#include "main.h"
/**
 * *_strdup -  a function that returns a pointer to
 * a newly allocated space in memory
 *  which contains a copy of the string given as a parameter.
 *  @str: character input
 *  Return: On success, the _strdup function returns a pointer
 *  to the duplicated string.
 *  It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int iterat = 0;
	int sizeOfArray;
	char *n;

	if (str == NULL)
		return (NULL);

	for (sizeOfArray = 0; str[sizeOfArray] != '\0'; sizeOfArray++)
		;
	n = malloc(sizeof(char) * sizeOfArray + 1);

	if (n == 0)
	{
		return (NULL);
	}
	
	for (iterat = 0; iterat < sizeOfArray; iterat++)
			n[iterat] = str[iterat];

	return (n);
}

