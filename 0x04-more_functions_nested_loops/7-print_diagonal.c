#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: function imput
*/
void print_diagonal(int n)
{
	int line;
	int space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= n; line++)
		{
			for (space = 1; space <= line; space++)
				_putchar(' ');
			_putchar('/');
			_putchar('\n');
		}
	}
}
