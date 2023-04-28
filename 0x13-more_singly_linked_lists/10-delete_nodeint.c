#include "lists.h"
/**
 * delete_nodeint_at_index - delete on index
 * @head: input head
 * @index: input index
 *
 * Return: 1 succeeded -1 failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *current = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1 && current != NULL; i++)
		current = current->next;
	if (i < index - 1)
		return (-1);
	temp = current->next;
	current->next = (current->next)->next;
	temp->next = NULL;
	free(temp);
	return (1);
}
