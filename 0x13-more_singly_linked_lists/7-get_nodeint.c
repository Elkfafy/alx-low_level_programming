#include "lists.h"
/**
 * get_nodeint_at_index - return nth node
 * @head: input head
 * @index: input index
 *
 * Return: selected node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	if (i < index)
		return (NULL);
	return (current);
}
