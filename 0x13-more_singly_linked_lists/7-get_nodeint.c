#include "lists.h"
/**
 * get_nodeint_at_index - get index
 * @head: input head
 * @index: input index
 *
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; i++)
		head = head->next;
	return (head);
}
