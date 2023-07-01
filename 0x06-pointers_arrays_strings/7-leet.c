#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @c: String
 * Return: encoded string
 */
char *leet(char *c)
{
	int i, j;
	char key[] = "AaEeOoTtLl";
	char value[] = "4433007722";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == key[j])
			{
				c[i] = value[j];
			}
		}
	}
}
