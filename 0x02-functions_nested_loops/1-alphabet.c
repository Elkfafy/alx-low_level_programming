#include "main.h"
/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char init;

	init = 'a';
	do {
		_putchar(init);
	} while (init++ != 'z');
	_putchar('\n');
}
