#include "lists.h"
/**
 * listint_len - return size of list
 * @h: input head
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));
}
