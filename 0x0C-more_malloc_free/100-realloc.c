#include "main.h"
/**
 * _realloc - realloc function
 * @ptr: input pointer
 * @old_size: input old size
 * @new_size: input new size
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *result;
	char *target, *dest = ptr;

	if (ptr == NULL)
	{
		result = malloc(new_size);
		if (result == NULL)
			return (NULL);
		return (result);
	}
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	result = malloc(new_size);
	target = result;
	if (result == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
		target[i] = dest[i];
	free(ptr);
	return (result);
}
