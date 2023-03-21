#include "main.h"
/**
 * jack_bauer - print 24 hour
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int init;

	for (init = 0; init < 1440; init++)
	{
		_putchar(((init / 60) / 10) + '0');
		_putchar(((init / 60) % 10) + '0');
		_putchar(':');
		_putchar(((init % 60) / 10) + '0');
		_putchar(((init % 60) % 10) + '0');
		_putchar('\n');
	}
}
