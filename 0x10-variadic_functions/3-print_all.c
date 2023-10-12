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
	char *cha = "";
	char *separate = "";
	int i = 0;

	va_start(arguments, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arguments, int));
				printf("%s", separate);
				break;
			case 'i':
				printf("%s", separate);
				printf("%d", va_arg(arguments, int));
				break;
			case 'f':
				printf("%s", separate);
				printf("%f", va_arg(arguments, double));
				break;
			case 's':
				if (cha == NULL)
					printf("(nil)");
				printf("%s", separate);
				printf("%s", va_arg(arguments, char *));
				break;
			default:
				i++;
				continue;
		}
		separate = ",";
		i++;
	}
	printf("\n");
	va_end(arguments);
}
