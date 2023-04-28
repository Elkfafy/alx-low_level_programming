#include "lists.h"
/**
 * print_listint - print list
 * @h: input head
 *
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
