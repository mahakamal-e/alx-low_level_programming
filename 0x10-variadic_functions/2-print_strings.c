#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @separator: string prints between two string
 * @n: number of paramters passed
 * @...: number of strings printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int iterat;
	char *s;
	va_list ptr;

	va_start(ptr, n);

	for (iterat = 0; iterat < n; iterat++)
	{
		s = va_arg(ptr, char *);
		/* If one of the string is NULL, print (nil) */
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		/* check If separator is not NULL, don’t print it */
		/* And check if the iterat on the last number not print seprator */
		if (separator != NULL && iterat != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
