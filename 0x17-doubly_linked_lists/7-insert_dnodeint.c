#include "lists.h"
/**
 * insert_dnodeint_at_index - insert at index
 * @h: input head
 * @idx: index
 * @n: input number
 * Return: new address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *current;

	if (h == NULL)
		return (NULL);
	current = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (current == NULL)
		return (NULL);
	while (current->next != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current->next == NULL && count != idx - 1)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = current->next;
	new->prev = current;
	current->next = new;
	return (current);
}
