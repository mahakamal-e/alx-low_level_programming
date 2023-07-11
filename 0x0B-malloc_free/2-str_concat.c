#include "main.h"
/**
 * *str_concat -  function that concatenates two strings
 * @s1: input first string
 * @s2: input second string
 * Return: return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int sizeOfs1;
	int sizeOfs2;
	char *n;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "\0";
	for (sizeOfs1 = 0; s1[sizeOfs1] != '\0'; sizeOfs1++)
		;
	for (sizeOfs2 = 0; s2[sizeOfs2] != '\0'; sizeOfs2++)
		;
	n = malloc(sizeof(char) * (sizeOfs1 + sizeOfs2) + 1);

	if (n == 0)
		return (0);

	for (i = 0; i <= sizeOfs1 + sizeOfs2; i++)
	{
		if (i < sizeOfs1)
			n[i] = s1[i];
		else
			n[i] = s2[i - sizeOfs2];
	}
	n[i] = '\0';
	return (n);
}
