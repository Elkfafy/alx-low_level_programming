#include "lists.h"
/**
 * free_listint2 - free with null head
 * @head: input head
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;
	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
