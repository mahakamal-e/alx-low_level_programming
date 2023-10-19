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
		/*print nill if h->str is false return nil */
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		
		h = h->next;
		
		iterat++;
	}
		return (iterat);
}
