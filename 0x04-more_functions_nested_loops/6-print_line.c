#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n: input of the function
*/

void print_line(int n)
{
	int line = 1;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (line <= n)
		{
			_putchar('_');
			line++;
		}
		_putchar('\n');
	}
}
