#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase,
 *
 * Return: Alwayes 0
*/
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower == 'e' || lower == 'q')
			lower++;
		putchar(lower);
		lower++;
	}
	putchar('\n');

	return (0);
}
