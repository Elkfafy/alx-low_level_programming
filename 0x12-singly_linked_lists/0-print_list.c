#include "lists.h"
/**
 * str_len - get length of string
 * @str: input string
 *
 * Return: string length
 */
size_t str_len(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
		;
	return (size);
}
/**
 * print_list - print elements of linked list
 * @h: input linked list head
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
