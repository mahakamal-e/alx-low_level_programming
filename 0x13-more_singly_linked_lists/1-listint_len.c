#include "lists.h"
/**
 * listint_len - the number of elements in a linked listint_t list.
 * @h: pointer to head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elm = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elm++;
	}
	return (num_elm);
}
