#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes the node at index
 *
 * @head: pointer to head
 * @index: input index of the node to delet
 *
 * Return: 1 onsuccess and -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp_node = *head;
	unsigned int i;

	if (!*head)
		return (-1);

	for (i = 0; i < index && tmp_node; i++)
	{
		tmp_node = tmp_node->next;
	}
	if (!tmp_node)
	{
		return (-1);
	}
	if (tmp_node == *head)
	{
		*head = tmp_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp_node->prev->next = tmp_node->next;
		if (tmp_node->next != NULL)
			tmp_node->next->prev = tmp_node->prev;
	}
	free(tmp_node);
	return (1);
}
