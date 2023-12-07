#include "lists.h"
/**
 * free_dlistint - a function that frees a dilustint_t list
 *
 * @head: point to head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}

