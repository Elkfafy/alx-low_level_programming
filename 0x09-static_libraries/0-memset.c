#include "main.h"
/**
 * _memset - set memory with constant
 * @s: input buffer
 * @b: constant byte
 * @n: first n bytes
 *
 * Return: modified buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
