#include "lists.h"
/**
 * sum_listint - return the sum of all data
 * @head: pointer to first element
 * Return: if list empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum_ = 0;

	while (head != NULL)
	{
		sum_ = sum_ + head->n;
		head = head->next;
	}

	return (sum_);
}
