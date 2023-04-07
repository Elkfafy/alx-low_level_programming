#include "main.h"
/**
 * isAccepted - is char in string
 * @str: input string
 * @c: input character
 *
 * Return: 1 if accepted 0 if not
 */
int isAccepted(char *str, char c)
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
 * _strspn - get length of prefix substring
 * @s: input string
 * @accept: accepted characters
 *
 * Return: positive number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; isAccepted(accept, s[i]); i++)
		;
	return (i);
}
