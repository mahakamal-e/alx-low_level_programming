#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints _putchar, followed by a new line.
 *
 * Return: Alwayes 0
*/
int main(void)
{
	char string[] = "_putchar";
	int numOfIndex;

	for (numOfIndex = 0; numOfIndex <= 7; numOfIndex++)
		_putchar(string[numOfIndex]);
	_putchar('\n');

	return (0);
}
