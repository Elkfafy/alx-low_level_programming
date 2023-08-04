#include "main.h"
/**
 * _memcpy - copy memory
 * @dest: destination buffer
 * @src: source buffer
 * @n: first n bytes
 *
 * Return: modified destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
