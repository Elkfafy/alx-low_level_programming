#include "lists.h"
/**
 * insert_nodeint_at_index - insert at index
 * @head: input head
 * @idx: input index
 * @n: input number
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = (*head)->next;
		*head = new;
		return (*head);
	}
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (i < idx - 1)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
