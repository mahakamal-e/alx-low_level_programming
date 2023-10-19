#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t
 *
 * @h: pointed to node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t iterat = 0;

	while (h)
	{
		if (h->str == '\0')
			printf("[0] (nil)\n");
		else
		{
			printf("[%d]", h->len);
			printf("%s\n", h->str);
			h = h->next;

			iterat++;
		}
		return (iterat);
