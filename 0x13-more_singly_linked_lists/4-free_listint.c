#include "lists.h"
/**
 * free_listint - free list
 * @head: input head
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	head->next = NULL;
	free(head);
}
