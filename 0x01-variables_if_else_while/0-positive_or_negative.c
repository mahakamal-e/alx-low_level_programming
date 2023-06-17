#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print number stored in the variable n is positive or negative
 *
 * Return: Alwayes 0 success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%dis positive\n,n");
	}
	else if (n == 0)
	{
		printf("%dis zero\n,n");
	}
	else
	{
		printf("%d is negative\n,n")
	}
	return (0);
}
