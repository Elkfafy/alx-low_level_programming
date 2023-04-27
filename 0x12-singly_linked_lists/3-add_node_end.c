#include <string.h>
#include "lists.h"
/**
 * add_node_end - add element in end
 * @head: input head
 * @str: input string
 *
 * Return: element address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *element;
	list_t *current = *head;

	element = malloc(sizeof(list_t));
	if (element == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	element->str = strdup(str);
	element->len = len;
	element->next = NULL;
	if (*head == NULL)
	{
		*head = element;
		return (*head);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = element;
	return (*head);
}
