#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth node
 * @head: point to head
 * @index: input index
 * Return: return null if index not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int iterate;

	for (iterate = 0; head != NULL; iterate++)
	{
		if (iterate == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
