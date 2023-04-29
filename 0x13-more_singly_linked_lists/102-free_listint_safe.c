#include "lists.h"
/**
 * get_index - gett index of node cause loop
 * @head: input head
 *
 * Return: index
 */
size_t get_index(const listint_t *head)
{
	size_t index = 1;
	const listint_t *step_1, *step_2;

	if (head == NULL || head->next == NULL)
		return (0);
	step_1 = head->next;
	step_2 = (head->next)->next;
	while (step_2 != NULL)
	{
		if (step_1 == step_2)
		{
			step_1 = head;
			while (step_1 != step_2)
			{
				index++;
				step_1 = step_1->next;
				step_2 = step_2->next;
			}
			step_1 = step_1->next;
			while (step_1 != step_2)
			{
				index++;
				step_1 = step_1->next;
			}
			return (index);
		}
		step_1 = step_1->next;
		step_2 = (step_2->next)->next;
	}
	return (0);
}
/**
 * free_listint_safe - free list safely
 * @h: input head
 *
 * Return: size of list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t i, index = get_index(*h);

	if (index == 0)
	{
		for (i = 0; *h != NULL; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		h = NULL;
		return (i);
	}
	for (i = 0; i < index; i++)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
	*h = NULL;
	h = NULL;
	return (index);
}
