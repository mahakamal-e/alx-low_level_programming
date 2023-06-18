#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: alwayes 0 success
*/

int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');

	return (0);
}
