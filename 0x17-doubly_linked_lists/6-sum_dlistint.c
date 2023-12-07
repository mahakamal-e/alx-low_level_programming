#include "lists.h"
/**
 * sum_dlistint - afunction that used to returns sum of all data of linkedlist
 *
 * @head: pointer to head
 * Return: sum otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
