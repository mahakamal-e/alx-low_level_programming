#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node in a dlistint_t by index
 *
 * @h: pointer to head
 * @idx: input index that be insert the new node
 * @n: data of new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp_node;
	dlistint_t *new_node;
	unsigned int i;

	tmp_node = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1 && tmp_node; i++)
	{
		tmp_node = tmp_node->next;
	}
	if (tmp_node == NULL)
	{
		free(tmp_node);
		return (NULL);
	}
	if (tmp_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = tmp_node;
	new_node->next = tmp_node->next;
	tmp_node->next->prev = new_node;
	tmp_node->next = new_node;


	return (new_node);
}
