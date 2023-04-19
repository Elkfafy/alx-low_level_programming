#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - get the index of found element
 * @array: input array
 * @size: input array size
 * @cmp: function to compare with interest of value
 *
 * Return: index of the element or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp ==  NULL || size <= 0 || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
