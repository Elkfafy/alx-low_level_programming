#include "main.h"
/**
 * convert - convert to "    " string
 * @num: input number
 *
 * Return: string "xxxx"
 */
char *convert(int num)
{
	int i, temp_num;
	char output[5];
	char *result;

	output[4] = '\0';
	for (i = 0; i < 4; i++)
		output[i] = ' ';
	if (num == 0)
	{
		output[3] = '0';
		result = output;
		return (result);
	}
	temp_num = num;
	i = 3;
	while (temp_num != 0)
	{
		output[i] = (temp_num % 10) + '0';
		i--;
		temp_num /= 10;
	}
	result = output;
	return (result);
}
/**
 * print_times_table - print times table of n
 * @n: input number
 *
 * Return: print times table
 */
void print_times_table(int n)
{
	int i, j, mul;
	char *str_mul;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				_putchar('0');
			else
			{
				mul = i * j;
				str_mul = convert(mul);
				while (*str_mul != '\0')
				{
					_putchar(*str_mul);
					str_mul++;
				}
			}
			if (j == n)
				continue;
			_putchar(',');
		}
		_putchar('\n');
	}
}
