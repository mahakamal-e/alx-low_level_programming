#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 *
 * @c: The chracter
 *
 * Return: 1 on success
 * On error -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
