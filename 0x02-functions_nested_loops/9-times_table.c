#include "main.h"
/**
 * times_table: function that prints the 9 times table, starting with 0
*/
void times_table(void)
{
	int num, multiply, result;

	for (num = 0; num <= 9; num++)
	{
		for (multiply = 0; multiply <= 9; multiply++)
		{
			_putchar(',');
			_putchar(' ');

			result = num * multiply;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + 48);
			_putchar((result % 10) + 48);
		}
		_putchar('\n');
	}
}
