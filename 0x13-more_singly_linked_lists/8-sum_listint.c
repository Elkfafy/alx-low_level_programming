#include "lists.h"
/**
 * sum_listint - sum the list items
 * @head: input head
 *
 * Return: sum of list elements
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_listint(head->next));
}
