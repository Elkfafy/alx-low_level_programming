#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: input head
 * @index: input index
 * Return: status
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current;

	current = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);
	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		(*head) = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
