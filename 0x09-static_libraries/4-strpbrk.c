#include "main.h"
#include <stddef.h>
/**
 * _isAccepted - is char in string
 * @str: input string
 * @c: input character
 *
 * Return: 1 if accepted 0 if not
 */
int _isAccepted(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
/**
 * _strpbrk - get pointer of first accepted char
 * @s: input string
 * @accept: accepted characters
 *
 * Return:  pointer for first accepted char
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, size;

	for (size = 0; s[size] != '\0'; size++)
		;
	for (i = 0; i <= size; i++)
		if (_isAccepted(accept, s[i]))
			return (&s[i]);
	return (NULL);
}
