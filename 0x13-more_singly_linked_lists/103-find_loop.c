#include "lists.h"
/**
 * find_listint_loop - find the loop node
 * @head: input head
 *
 * Return: the loop node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *step_1, *step_2;

	if (head == NULL || head->next == NULL)
		return (NULL);
	step_1 = head->next;
	step_2 = (head->next)->next;
	while (step_2 != NULL)
	{
		if (step_1 == step_2)
		{
			step_1 = head;
			while (step_1 != step_2)
			{
				step_1 = step_1->next;
				step_2 = step_2->next;
			}
			return (step_1);
		}
		step_1 = step_1->next;
		step_2 = (step_2->next)->next;
	}
	return (NULL);
}
