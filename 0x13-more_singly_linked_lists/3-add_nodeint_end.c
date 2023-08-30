#include "lists.h"
/**
 * add_nodeint_end - add node at end
 * @head: input head
 * @n: input integer
 *
 * Return: pointer to new elem
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *elem = malloc(sizeof(listint_t));

	if (elem == NULL)
		return (NULL);
	elem->n = n;
	elem->next = NULL;
	if (*head == NULL)
	{
		*head = elem;
		return (elem);
	}
	while ((*head)->next != NULL)
		head = &((*head)->next);
	(*head)->next = elem;
	return (elem);
}
