#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _realloc - reallocation of memory
 * @ptr: input pointer
 * @old_size: input old size
 * @new_size: input new size
 *
 * Return: new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *temp;

	if (!ptr)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		temp = ptr;
		ptr = malloc(new_size);
		if (!ptr)
		{
			ptr = temp;
			return (NULL);
		}
		for (i = 0; i < old_size; i++)
		{
			ptr[i] = temp[i];
		}
		free(temp);
		return (ptr);
	}
	if (new_size < old_size)
	{
		temp = ptr;
		ptr = malloc(new_size);
		if (!ptr)
		{
			ptr = temp;
			return (NULL);
		}
		for (i = 0; i < new_size; i++)
		{
			ptr[i] = temp[i];
		}
		free(temp);
		return (ptr);
	if (new_size == old_size)
		return (ptr);
}
