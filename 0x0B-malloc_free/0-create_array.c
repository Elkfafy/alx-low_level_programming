#include "main.h"
/**
 * create_array - create array
 * @size: input array size
 * @c: initial char
 *
 * Return: array of characters
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *temp;

	if (size == 0)
		return (NULL);
	temp = malloc(size);
	if (temp == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		temp[i] = c;
	return (temp);
}

