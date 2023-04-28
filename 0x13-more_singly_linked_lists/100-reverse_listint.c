#include "lists.h"
/**
 * reverse_listint - reverse list
 * @head: input head
 *
 * Return: first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *before;

	if (head == NULL || *head == NULL)
		return (NULL);
	before = NULL;
	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = next;
	}
	(*head)->next = before;
	return (*head);
}
