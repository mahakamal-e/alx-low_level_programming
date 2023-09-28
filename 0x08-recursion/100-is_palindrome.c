#include "main.h"
/**
 * is_palindrome - function return 1 if string empty
 * @s: input string
 * Return: 1 if string empty
 * otherwise 0
 */
int strlength(char *s);
int check(char *s, int iterat, int lengthStr);
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, strlength(s)));
}

/**
 * strlength - return the length of string
 *
 * @s: string input
 *
 * Return: int the length of string
 */
int strlength(char *s)
{
	int length = 0;

	while (*s > '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * check - check for palindrome
 * @s: string input
 * @iterat: iterator integer
 * @lengthStr: length of input string
 * Return: 1 if palindrome o otherwise
 */

int check(char *s, int iterat, int lengthStr)
{
	if (*(s + iterat) != *(s + lengthStr - 1))
		return (0);
	if (iterat >= lengthStr)
		return (1);
	return (check(s, iterat + 1, lengthStr - 1));
}
