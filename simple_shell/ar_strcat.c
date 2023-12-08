#include "main.h"
/**
 * ar_strcat - str concatination
 * @dest: input destination
 * @src: input source
 * Return: string pointer
 */
char *ar_strcat(char *dest, const char *src)
{
	int i, start;

	for (i = 0; dest[i] != '\0'; i++)
		;
	start = i;
	for (; src[i - start] != '\0'; i++)
		dest[i] = src[i - start];
	dest[i] = '\0';
	return (dest);
}
