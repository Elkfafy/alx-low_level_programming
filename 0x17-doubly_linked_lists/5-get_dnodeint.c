#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: input head
 * @index: input index
 * Return: node address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		count++;
		head = head->next;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
