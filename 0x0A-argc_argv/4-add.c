#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		char *c = argv[i];

		for (j = 0; c[j] != '\0'; j++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(c);
	}
	printf("%d\n", sum);

	return (0);
}
