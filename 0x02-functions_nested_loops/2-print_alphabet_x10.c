#include "main.h"
/**
 * print_alphabet_x10 - print 10 times alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char init;
	int i;

	for (i = 0; i < 10; i++)
	{
		init = 'a';
		do {
			_putchar(init);
		} while (init++ != 'z');
		_putchar('\n');
	}
}
