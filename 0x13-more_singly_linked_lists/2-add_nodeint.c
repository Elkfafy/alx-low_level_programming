#include "lists.h"
/**
 * add_nodeint - add new node
 * @head: input head
 * @n: input number
 *
 * Return: pointer to new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_elem = malloc(sizeof(listint_t));

	if (new_elem == NULL)
		return (NULL);
	new_elem->n = n;
	new_elem->next = *head;
	*head = new_elem;
	return (new_elem);
}
