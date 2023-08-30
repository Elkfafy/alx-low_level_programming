#include "lists.h"
/**
 * print_listint - print list of int
 * @h: input head
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
