#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head
 * @idx: index for new node
 * @n: value of new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp_node, *n_node;
	unsigned int iterat;

	n_node = malloc(sizeof(listint_t));

	if (head == NULL || n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	temp_node = *head;

	for (iterat = 0; temp_node != NULL && iterat < idx; iterat++)
	{
		if (iterat == idx - 1)
		{
			n_node->next = temp_node->next;
			temp_node->next = n_node;
			return (n_node);
		}
		temp_node = temp_node->next;
	}

	return (NULL);
}
