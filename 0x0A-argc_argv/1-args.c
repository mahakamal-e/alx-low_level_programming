#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
