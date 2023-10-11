#include "function_pointers.h"

/**
 * print_name - function used to print a name
 * @name: the name
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
