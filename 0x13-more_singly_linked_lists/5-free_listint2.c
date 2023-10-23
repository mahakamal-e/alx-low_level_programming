#include "lists.h"
/**
 * free_listint2 - free listint_t
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node, *another_node;

	if (head == NULL)
		return;

	another_node = *head;
	while (*head != NULL)
	{
		temp_node = another_node;
		another_node = another_node->next;
		free(temo_node);
	}
	*head = NULL;
}
