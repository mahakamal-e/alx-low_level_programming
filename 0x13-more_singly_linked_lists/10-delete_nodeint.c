#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at
 * index of a listint_t linked list.
 * @head: pointer to head
 * @index: index of node to be deleted
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr_node, *temp_node;
	unsigned int iterat;

	if (*head == NULL)
		return (-1);
	if (index == NULL)
	{
		curr_node = *head;
		*head = (*head)->next;
		free(curr_node);
		return (1);
	}

	curr_node = *head;
	for (iterat = 0; curr_node != NULL; iterat++)
	{
		if (iterat == index)

		{
			temp_node->next = curr_node->next;
			free(curr_node);
			return (1);
		}
		temp_node = curr_node;
		curr_node = curr_node->next
	}
	return (-1);
}
