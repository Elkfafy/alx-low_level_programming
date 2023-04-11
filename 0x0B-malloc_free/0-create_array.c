#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - create array
 * @size: array size
 * @c: filled character
 *
 * Return: pointer to that array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		arr[i] = c;
	if (i < size)
		return (NULL);
	return (arr);
}
