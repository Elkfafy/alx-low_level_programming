#include "main.h"
/**
 * times_table - get times table
 *
 * Return: 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				continue;
			}
			result = i * j;
			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (j == 9)
				continue;
			_putchar(',');
		}
		_putchar('\n');
	}
}
