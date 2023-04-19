#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterating on array
 * @array: input array
 * @size: size of that array
 * @action: function to action on element of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || size <= 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
