#include "lists.h"

/**
 * add_dnodeint_end - function thst adds a new node at the end
 * @head: point to head
 * @n: new node data
 * Return: the address of the new element, or NULL otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_tail_node;
	dlistint_t temp_node;

	new_tail_node =  malloc(sizeof(dlistint_t));

	if (new_tail_node == NULL)
		return (NULL);

	new_tail_node->n = n;
	new_tail_node->next = NULL;

	if ((*head) == NULL)
	{
		new_tail_node->prev = NULL;
		*head = new_tail_node;
	}
	else
	{
		temp_node = *head;
		while (temp_node->next)
			temp_node = temp_node->next;
		new_tail_node->prev = temp_node;
		temp_node->next = new_tail_node;
	}
	return (new_tail_node);
}
