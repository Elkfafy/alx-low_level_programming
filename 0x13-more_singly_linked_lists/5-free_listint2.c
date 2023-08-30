#include "lists.h"
/**
 * free_listint_helper - free list normal
 * @head: input head
 */
void free_listint_helper(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint_helper(head->next);
	free(head);
}
/**
 * free_listint2 - free with make head equal null
 * @head: input head
 */
void free_listint2(listint_t **head)
{
	free_listint_helper(*head);
	*head = NULL;
}
