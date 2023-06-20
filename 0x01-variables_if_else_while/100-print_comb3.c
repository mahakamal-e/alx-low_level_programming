#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: Alwayes 0
*/
int main(void)
{
	int f_number = 0, s_number;

	while (f_number <= 99)
	{
		s_number = f_number;
		while (s_number <= 99)
		{
			if (s_number != f_number)
			{
				putchar((f_number / 10) + 48);
				putchar((f_number % 10) + 48);
				putchar(' ');
				putchar((s_number / 10) + 48);
				putchar((s_number % 10) + 48);

				if (f_number != 98 || s_number != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s_number++;
		}
		f_number++;
	}
	putchar('\n');

	return (0);
}
