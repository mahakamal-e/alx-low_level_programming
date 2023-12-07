#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth node
 * @head: point to head
 * @index: input index
 * Return: return null if index not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int iterat;

	for (iterat = 0; head; iterat++)
	{
		if (iteart == index)
			return (head);
		head = head->next;
		iterat++;
	}
	return (NULL);
}
