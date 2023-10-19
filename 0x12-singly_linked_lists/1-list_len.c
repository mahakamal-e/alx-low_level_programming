#include "lists.h"
/**
 * list_len - returns the numbers of elements in linked list
 * @h: pointer to first node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t iterat = 0;

	while (h)
	{
		h = h->next;
		iterat++;
	}

	return (iterat);
}
