#include "lists.h"
/**
 * print_listint_safe - print list with a loop
 * @head: input head
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i;

	for (i = 0; ; i++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (i);
}
