#include "main.h"
/**
 * _strlen - get len of string
 * @s: input string
 * Return: the string length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
