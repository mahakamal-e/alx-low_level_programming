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

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (sizeOfs1 = 0; s1[sizeOfs1] != '\0'; sizeOfs1++)
		;
	for (sizeOfs2 = 0; s2[sizeOfs2] != '\0'; sizeOfs2++)
		;
	n = malloc((sizeOfs1 + sizeOfs2) * sizeof(char) + 1);

	if (n == 0)
		return (NULL);

	sizeOfs1 = 0;
	sizeOfs2 = 0;

	while (s1[sizeOfs1] != '\0')
	{
		n[sizeOfs1] = s1[sizeOfs1];
		sizeOfs1++;
	}
	while (s2[sizeOfs2] != '\0')
	{
		n[sizeOfs1] = s2[sizeOfs2];
		sizeOfs2++;
		sizeOfs1++;
	}
	n[sizeOfs1] = '\0';
	return (n);
}
