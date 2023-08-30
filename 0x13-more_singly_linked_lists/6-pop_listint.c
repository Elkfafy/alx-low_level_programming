#include "lists.h"
/**
 * pop_listint - pop list
 * @head: input head
 *
 * Return: return node's data
 */
int pop_listint(listint_t **head)
{
	int temp_int;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	temp_int = temp->n;
	free(temp);
	return (temp_int);
}
