#include "lists.h"
/**
 * add_dnodeint - add node to list
 * @head: input head
 * @n: input number
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
