#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - malloc to b bytes
 * @b: input bytes
 *
 * Return: memory location
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (!arr)
		exit(98);
	return (arr);
}
