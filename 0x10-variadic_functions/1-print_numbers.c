#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @separator: const string printed between numbers
 * @n: number of parameters passed
 * @...: numbers to be printed
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int iterat;

	va_start(ptr, n);

	for (iterat = 0; iterat < n; iterat++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
