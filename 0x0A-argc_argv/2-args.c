#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
