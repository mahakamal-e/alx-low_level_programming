#include "lists.h"
/**
 * dlistint_len - function that used to get number of elements.
 * @h: point to head.
 * Return: returns the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_num = 0;

	while (h != NULL)
	{
		h = h->next;
		node_num++;
	}
	return (node_num);
}
