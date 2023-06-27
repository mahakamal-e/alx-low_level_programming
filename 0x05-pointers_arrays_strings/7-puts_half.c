#include "main.h"
#include <string.h>
/**
 * puts_half - a function that prints half of a string
 *
 * @str: input string
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	i++;

	for (i = length / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
