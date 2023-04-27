#include <string.h>
#include "lists.h"
/**
 * add_node - add node beginner
 * @head: first head
 * @str: new str of node
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *element;

	element = malloc(sizeof(list_t));
	if (element == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	element->str = strdup(str);
	element->len = len;
	element->next = *head;
	*head = element;
	return (element);
}
