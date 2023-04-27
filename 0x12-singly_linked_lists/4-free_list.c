#include "lists.h"
/**
 * free_list - free linked list
 * @head: input head
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
