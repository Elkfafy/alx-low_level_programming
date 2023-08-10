#include "main.h"
/**
 * _calloc - calculate malloc
 * @nmemb: input array of nmemb
 * @size: number of array elements
 *
 * Return: new pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	return (malloc(nmemb * size));
}
