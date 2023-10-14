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
	int flag;

	va_start(arguments, format);
	iterat = 0;

	while (format[iterat] != '\0')
	{
		switch (format[iterat])
		{
			case 'c':
				printf("%c", va_arg(arguments, int));
				flag = 0;
				break;
			case 'i':
				printf("%d", va_arg(arguments, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(arguments, double));
				flag = 0;
				break;
			case 's':
				cha = va_arg(arguments, char *);
				if (cha == NULL)
					printf("(nil)");
				printf("%s", cha);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[iterat + 1] != '\0' && flag == 0)
			printf(", ");
		iterat++;
	}
	printf("\n");
	va_end(arguments);
}
