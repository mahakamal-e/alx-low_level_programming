#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: alwayes 0
*/

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}

		num++;
	}
	putchar('\n');

	return (0);
}
