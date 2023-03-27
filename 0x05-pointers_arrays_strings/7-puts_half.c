#include "main.h"
/**
 * puts_half - print half string
 * @str: input string
 */
void puts_half(char *str)
{
	int size, first;

	size = 0;
	while (str[size] != '\0')
		size++;
	first = size /2;
	if (size % 2 != 0)
		first++;
	for (; first < size; first++)
		_putchar(str[first]);
	_putchar('\n');
}
