#include "lists.h"
#include <string.h>
/**
 * add_node_end - add node to end of linked list
 * @head: input head
 * @str: input node string
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (str && !(new_node->str))
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; (new_node->str)[len] != 0; len++)
		;
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	while ((*head)->next != NULL)
		head = &((*head)->next);
	(*head)->next = new_node;
	return (new_node);
}
