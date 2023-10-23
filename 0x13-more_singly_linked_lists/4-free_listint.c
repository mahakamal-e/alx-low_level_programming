#include "lists.h"
/**
 * free_listint - free listint_t
 * @head: point to head
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
