#include "main.h"
/**
 * _puts_recursion - using recursion to puts
 * @s: input string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s++);
	_puts_recursion(s);
}