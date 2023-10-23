#include "lists.h"
/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: pointer to head
 * @index: index of node you want to return
 *
 * Return:  index of node otherwise null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp_node;
	unsigned int iterat;

	temp_node = head;
	for (iterat = 0; temp_node != NULL && iterat < index; iterat++)
	{
		temp_node = temp_node->next;
	}

	return (temp_node);
}
