#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: function imput
*/
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int line, space;

		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
