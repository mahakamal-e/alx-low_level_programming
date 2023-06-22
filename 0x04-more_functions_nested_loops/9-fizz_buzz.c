#include "main.h"
/**
 * main - entry point
 *
 * Description: print numbers from 1 to 100
 *
 * Return: alwayes 0 success
*/
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 5 == 0 && num % 3 == 0)
			printf("fizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

