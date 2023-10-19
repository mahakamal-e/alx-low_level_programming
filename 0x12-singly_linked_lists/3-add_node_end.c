#include "lists.h"
/**
 * add_node_end - add new node at the end
 * @head: pointer to first node
 * @str: string added
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_;
	list_t *t;

	node_ = malloc(sizeof(list_t));
	t = *head;

	if (!node_)
		return (NULL);
	if (str)
	{
		node_->str = strdup(str);
		node_->len = strlen(node_->str);
		node_->next = NULL;
	}

	if (*head == NULL)
	{
		*head = node_;
		return (node_);
	}

	while (t->next)
		t = t->next;
	t->next = node_;
	return (node_);
}
