#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: function imput
*/
void print_diagonal(int n)
{
	int line = 1;
	int space = 1;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (line <= n)
		{
			while (space <= line)
			{
				_putchar(' ');
				space++;
			}
			_putchar('/');
			_putchar('\n');
			line++;
		}
	}
}
