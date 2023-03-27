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
	for (first = size / 2; first < size; first++)
		_putchar(str[first]);
	_putchar('\n');
}
