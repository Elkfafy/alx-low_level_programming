#include "lists.h"
/**
 * print_list - print list
 * @h: input head
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int size = 1;
	list_t *current = h->next;

	if (h == NULL)
		return (0);
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		size++;
	}
	return (size);
}
