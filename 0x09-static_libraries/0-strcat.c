#include "main.h"
/**
 * _strcat - catacting string
 * @dest: destination string
 * @src: source string
 *
 * Return: a character pointer
 */
char *_strcat(char *dest, char *src)
{
	int size;

	size = 0;
	while (dest[size] != '\0')
		size++;
	while (*src != '\0')
	{
		dest[size] = *src;
		size++;
		src++;
	}
	dest[size] = '\0';
	return (dest);
}
