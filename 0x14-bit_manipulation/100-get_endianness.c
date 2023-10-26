#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 big endian 1 if little
 */
int get_endianness(void)
{
	int n = 1;
	char *bit;

	bit  = (char *)&n;
	return (*bit);


