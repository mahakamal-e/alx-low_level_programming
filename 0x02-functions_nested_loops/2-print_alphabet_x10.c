#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*/

void print_alphabet_x10(void)
{
	char alphabet;
	int index;

	for (loop = 0; loop < 10; loop++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
