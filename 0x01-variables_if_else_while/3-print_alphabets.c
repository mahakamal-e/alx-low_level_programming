#include <stdio.h>
/**
 * main - Entry point
 *
 * Descreption:prints the alphabet in lowercase, and then in uppercase
 *
 * Returnt: Alwayes 0
*/

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
