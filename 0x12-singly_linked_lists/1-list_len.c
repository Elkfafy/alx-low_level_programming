#include "lists.h"
/**
 * list_len - get nodes number
 * @h: input head
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int size = 1;
	list_t *current;

	if (h == NULL)
		return (0);
	current = h->next;
	while (current != NULL)
	{
		current = current->next;
		size++;
	}
	return (size);
}