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

	for (i = i / 2 ; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
