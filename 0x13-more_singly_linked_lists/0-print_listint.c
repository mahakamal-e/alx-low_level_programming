#include "lists.h"
/**
 * print_listint - prints all elements in list
 * @h: pointer to head
 *
 * Return: number of nodes (size)
 */
size_t print_listint(const listint_t *h)
{
	size_t size_nodes = 0;

	while (h != NULL)
	{
		size_nodes++;
		h = (*h).next;
	}
	return (size_nodes);
}
