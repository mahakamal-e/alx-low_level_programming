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
	char *_ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);

	b = atoi(argv[3]);

	_ptr = argv[2];

	if (get_op_func(_ptr) == NULL || _ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(_ptr)(a, b));

	return (0);
}
