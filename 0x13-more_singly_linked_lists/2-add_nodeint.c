#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to head
 * @n: value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));

	if (new_head == NULL || head == NULL)
		return (NULL);

	(*new_head).next = *head;
	(*new_head).n = n;

	*head = new_head;

	return (new_head);
}
