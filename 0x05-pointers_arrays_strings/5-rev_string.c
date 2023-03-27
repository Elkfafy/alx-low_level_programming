#include "main.h"
/**
 * print_rev - rev of string
 * @s: input string
 */
void print_rev(char *s)
{
	char temp;
	int start, end;
	char *c;

	start = 0;
	end = -1;
	c = s;
	while (*c != '\0')
	{
		end++;
		c++;
	}
	while (start < end)
	{
		temp = *(s + start);
		*(s + start) = *(s + end);
		*(s + end) = temp;
		start++;
		end--;
	}
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
