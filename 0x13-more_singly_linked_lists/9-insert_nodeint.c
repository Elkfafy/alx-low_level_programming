#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at index
 * @head: input head
 * @idx: input index
 * @n: input number
 *
 * Return: the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *elem = malloc(sizeof(listint_t));

	if (elem == NULL)
		return (NULL);
	elem->n = n;
	if (*head == NULL && idx > 0)
	{
		free(elem);
		return (NULL);
	}
	for (i = 0; *head && i < idx - 1; i++)
		head = &((*head)->next);
	if (*head == NULL)
	{
		free(elem);
		return (NULL);
	}
	elem->next = (*head)->next;
	(*head)->next = elem;
	return (elem);
}
