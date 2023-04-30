#include "lists.h"
/**
 * free_listint2 - free with null head
 * @head: input head
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	free_listint2(&((*head)->next));
	(*head)->next = NULL;
	free(*head);
	free(head);
	*head = NULL;
}
