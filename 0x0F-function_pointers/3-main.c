#include "3-calc.h"

/**
 * main - used to print the result of mathematical operstions
 * @argc: number of arguments
 * @argv: argemunt vactor array
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	int a;
	int b;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	func_ptr = get_op_func(argv[2]);

	b = atoi(argv[3]);

	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func_ptr(a, b));

	return (0);
}
