#include "main.h"
/**
 * _strncpy - copy max n in string
 * @dest: destination string
 * @src: source string
 * @n: max character of src number
 *
 * Return: the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int size, src_size, i;

	size = 0;
	while (dest[size] != '\0')
		size++;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	for (i = 0; i < n; i++)
	{
		if (i <= src_size)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
