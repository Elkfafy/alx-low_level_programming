#include "main.h"
/**
 * rev_recursion - print reverse
 * @s: input string
 */
void rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	rev_recursion(s + 1);
	_putchar(*s);
}
/**
 * _print_rev_recursion - print reverse with new line
 * @s: input string
 */
void _print_rev_recursion(char *s)
{
	rev_recursion(s);
}
