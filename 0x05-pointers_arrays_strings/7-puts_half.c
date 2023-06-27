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
	int length = strlen(str);

	for (i = length / 2 ; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n')
}
