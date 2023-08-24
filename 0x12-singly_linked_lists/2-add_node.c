#include "lists.h"
#include "string.h"
/**
 * str_len - get length of str
 * @str: input string
 *
 * Return: return string length
 */
unsigned int str_len(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * add_node - add a node
 * @head: input head
 * @str: input node string
 *
 * Return: head of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (str && !(new_node->str))
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = str_len(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
