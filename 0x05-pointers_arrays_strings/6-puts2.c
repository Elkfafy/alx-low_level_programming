#include "main.h"
/**
 * puts2 - print string
 * @str: input string
 */
void puts2(char *str)
{
	int size, i;

	size = 0;
	while (str[size] != '\0')
		size++;
	for (i = 0; i < size; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
