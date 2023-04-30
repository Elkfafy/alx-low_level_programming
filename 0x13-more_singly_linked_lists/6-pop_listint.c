#include "lists.h"
/**
 * pop_listint - pop head
 * @head: input head
 *
 * Return: int value
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int value;

	if (head == NULL || *head == NULL)
		return (0);
	value = (*head)->n;
	*head = (*head)->next;
	free(current);
	return (value);
}
