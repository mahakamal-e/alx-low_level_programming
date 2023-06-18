#include<stdio.h>
/**
 * main - Entry point
 *
 * Descreption: prints the alphabet in lowercase
 *
 * Return: Alwayes 0(success)
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
