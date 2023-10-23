#include "lists.h"
/**
 * add_nodeint_end - add new node at the end of listint_t
 * @head: pointer to first node
 * @n: value of new node
 *
 * Return: the address of the new node
 * NULL otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t new_node_last, temp_node;

	new_node_last = malloc(sizeof(listint_t));

	if (new_node_last == NULL)
		return (NULL);

	new_node_last->next = NULL;
	new_node_last->n = n;

	if (*head == NULL)
	{
		*head = new_node_last;
		return (new_node_last);
	}
	else
	{
		temp_node = *head;
		/* iterat until to reach to last node */
		while (temp_node->next)
			temp_node = temp_node->next;
		temp_node->next = new_node_last;
	}
	return (new_node_last);
}
