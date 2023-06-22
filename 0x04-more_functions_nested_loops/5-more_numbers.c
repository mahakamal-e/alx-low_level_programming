#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14.
*/
void more_numbers(void)
{
	int numOfTimes, num;

	for (numOfTimes = 1; numOfTimes <= 10; numOfTimes++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar('1');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
