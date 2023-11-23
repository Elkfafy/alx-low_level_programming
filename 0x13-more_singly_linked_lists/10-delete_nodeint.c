#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: input head
 * @index: input index
 *
 * Return: succeded or not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL && *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; *head && i < index - 2; i++)
		head = &((*head)->next);
	if (*head == NULL)
		return (-1);
	temp = (*head)->next;
	(*head)->next = (*head)->next->next;
	free(temp);
	return (1);
}
