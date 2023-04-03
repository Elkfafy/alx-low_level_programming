#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate char in string
 * @s: input string
 * @c: character that needed to be located
 *
 * Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	int i, size;

	for (size = 0; s[size] != '\0'; size++)
		;
	for (i = 0; s[i] != c; i++)
		if (i > size)
			return (NULL);
	return (&s[i]);
}
