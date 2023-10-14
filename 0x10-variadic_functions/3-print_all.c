#include "variadic_functions.h"
/**
 * print_all - a function that prints anything.
 *
 * @format: a list of types of arguments passed to the function
 * @...: arguments
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	char *cha;
	int iterat;
	char *separate = "";

	va_start(arguments, format);
	iterat = 0;

	while (format[iterat] != '\0')
	{
		switch (format[iterat])
		{
			case 'c':
				printf("%s%c", separate, va_arg(arguments, int));			
				break;
			case 'i':
				printf("%s%d", separate, va_arg(arguments, int));
				break;
			case 'f':
				printf("%s%f", separate, va_arg(arguments, double));
				break;
			case 's':
				cha = va_arg(arguments, char *);
				if (cha == NULL)
					printf("(nil)");
				printf("%s%s", separate, cha);
				break;
			default:
				iterat++;
				continue;
		}
		separate = "";
		iterat++;
	}
	printf("\n");
	va_end(arguments);
}
