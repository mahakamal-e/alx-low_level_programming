#include "lists.h"
/**
 * free_list - free list
 *
 * @head: point to head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node_;

	if (!head)
		return;
	while (head)
	{
		node_ = head->next;

		free(head->str);

		free(head);
		head = node_;
	}
}
