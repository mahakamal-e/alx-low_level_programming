#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return : alwayes 0
*/
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		num++;
		putchar(num);
	}
	putchar('\n');

	return (0);
}
