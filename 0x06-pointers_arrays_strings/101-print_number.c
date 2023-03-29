#include "main.h"
/**
 * print_number - print number
 * @n: input number
 */
void print_number(int n)
{
	int init;

	init = 1000000000;
	if (n < 0)
	{
		init = -init;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n / init == 0)
		init /= 10;
	while (init != 0)
	{
		_putchar((n / init) + '0');
		n %= init;
		init /= 10;
	}
}
