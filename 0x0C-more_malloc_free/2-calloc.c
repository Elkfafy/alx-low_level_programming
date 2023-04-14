#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - calloc function
 * @nmemb: input number of members
 * @size: size of each member
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void **arr;
	char *x = 0x0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * sizeof(void *));
	if (!arr)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = malloc(size);
		if (!arr[i])
		{
			if (i != 0)
			{
				for (i = i - 1; i >= 1; i--)
					free(arr[i]);
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
		arr[i] = x;
	}
	return (arr);
}
