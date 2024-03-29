#include "function_pointers.h"
/**
 * int_index - index of the match
 * @array: input array
 * @size: input size of the array
 * @cmp: compare function
 *
 * Return: index of first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
