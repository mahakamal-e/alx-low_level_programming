#include "lists.h"
/**
 * add_node - add new node at the begining of the list
 * @head: pointer to first node
 * @str: string to node
 *
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	while (str[length])
	{
		length++;
	}

	if (str)
	{
		new_node->str = strdup(str);

		if (!new_node->str)
		{
			free(new_node);

			return (NULL);
		}
		new_node->len = length;
	}
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
