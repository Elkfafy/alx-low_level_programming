#include "lists.h"
/**
 * get_loop_index - gett index of node cause loop
 * @head: input head
 *
 * Return: index
 */
size_t get_loop_index(const listint_t *head)
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
 * print_listint_safe - print list with a loop
 * @head: input head
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t i, index = get_loop_index(head);

	if (index == 0)
	{
		for (i = 0; current != NULL; i++)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			current = current->next;
		}
		return (i);
	}
	for (i = 0; i < index; i++)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}
	printf("-> [%p] %d\n", (void *)current, current->n);
	return (index);
}
