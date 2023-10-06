#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first pointer to string
 * @s2: second pointer to string
 * @n: number of byte
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, length_s1, length_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get the length of stringd s1 , s2 */
	length_s1 = 0;
	length_s2 = 0;


	while (s1[length_s1] != '\0')
		length_s1++;

	while (s2[length_s2] != '\0')
		length_s2++;

	s = malloc(length_s1 + n + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[j] = s2[j];
		i++;
	}

	s[i] = '\0';

	return (s);
}
