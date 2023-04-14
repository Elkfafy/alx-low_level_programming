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
	void *arr;
	char *temp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	temp = (char *)arr;
	for (i = 0; i < nmemb; i++)
		*(temp + i) = '\0';
	return (arr);
}
