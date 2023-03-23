#include "main.h"
/**
 * print_number - print number
 *@n: input number
 */
void print_number(int n)
{
	int init, temp;

	init = 1000000000;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	temp = n / init;
	while (temp == 0)
	{
		init /= 10;
		temp = n / init;
	}
	while (init != 0)
	{
		_putchar(temp + '0');
		n %= init;
		init /= 10;
		if (init == 0)
			break;
		temp = n / init;
	}
}
