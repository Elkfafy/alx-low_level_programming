#include "main.h"
/**
 * _memset - set memory to a value
 * @ptr: input pointer
 * @val: input value
 * @size: size of the array
 *
 * Return: a pointer
 */
void *_memset(void *ptr, int val, size_t size)
{
	char *temp = ptr;

	while (size-- > 0)
		*temp++ = val;
	return (ptr);
}
/**
 * _calloc - calculate malloc
 * @nmemb: input array of nmemb
 * @size: number of array elements
 *
 * Return: new pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	result = _memset(result, 0, nmemb * size);
	return (result);
}
