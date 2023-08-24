#include "lists.h"
/**
 * list_len - get length of linked list
 * @h: input head of list
 *
 * Return: length of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
