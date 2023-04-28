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
	int value = (*head)->n;

	*head = (*head)->next;
	free(current);
	return (value);
}
