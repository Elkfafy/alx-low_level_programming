#include "lists.h"
/**
 * add_dnodeint_end - add node to end of list
 * @head: input head
 * @n: input number
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	new->prev = current;
	current->next = new;
	return (new);
}
