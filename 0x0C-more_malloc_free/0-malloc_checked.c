#include "main.h"
/**
 * malloc_checked - return malloc with check
 * @b: input bytes number
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *temp;

	temp = malloc(b);
	if (temp == NULL)
		exit(98);
	return (temp);
}
