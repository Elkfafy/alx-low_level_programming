#include "main.h"
/**
 * print_rev - rev of string
 * @s: input string
 */
void print_rev(char *s)
{
	int size;

	size = 0;
	while (s[size] != '\0')
		size++;
	for (size--; size >= 0; size--)
	{
		_putchar(s[size]);
	}
	_putchar('\n');
}
