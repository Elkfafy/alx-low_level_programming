#include "main.h"
/**
 * _strchr - locate char in string
 * @s: input string
 * @c: character that needed to be located
 *
 * Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
		;
	if (s[i] == '\0')
		return (NULL);
	return (&s[i]);
}
