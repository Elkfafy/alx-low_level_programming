#include "main.h"
/**
 * _strncat - n catination of string
 * @dest: destination string
 * @src: source string
 * @n: first char from the source
 *
 * Return: the catinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, size;

	size = 0;
	while (dest[size] != '\0')
		size++;
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[size] = src[i];
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
