#include "lists.h"
/**
 * sum_listint - sum list
 * @head: input head
 *
 * Return: sum of elements
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_listint(head->next));
}
