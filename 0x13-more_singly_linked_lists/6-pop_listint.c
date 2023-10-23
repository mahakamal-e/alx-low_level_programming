#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: point to the head
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int number;

	if (head == NULL || *head == NULL)
		return (0);
	/* temp_node  point to next */
	temp_node = (*head)->next;
	number = (*head)->n;

	free(*head);
	*head = temp_node;

	return (number);
}
