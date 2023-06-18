#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: alwayes zero
*/

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);

		if (num == 57)
			num = 97;
		num++;
	}
	putchar('\n');

	return (0);
}
