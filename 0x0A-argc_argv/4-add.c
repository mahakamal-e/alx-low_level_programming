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

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		char *num = argv[i];

		for (int j = 0; num[j] != '\0'; j++)
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(num);
	}
	printf("%d\n", sum);

	return (0);
}
