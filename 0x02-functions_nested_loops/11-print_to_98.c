#include "main.h"
char *convert_to_string(int num);
/**
 * print_to_98 - print from num to 98
 * @n: The init number
 *
 * Return: void
 */
void print_to_98(int n)
{
	char *str_num;
	int init, temp;

	if (n <= 98)
		for (init = n; init < 99; init++)
		{
			if (init >= 0 && init < 10)
				_putchar(init + '0');
			else if (init < 0 && init > -10)
			{
				temp = init;
				_putchar('-');
				temp *= -1;
				_putchar(temp + '0');
			}
			else
			{
				temp = init;
				if (temp < 0)
				{
					_putchar('-');
					temp = temp * -1;
				}
				str_num = convert_to_string(temp);
				while (*str_num != '\0')
				{
					_putchar(*str_num);
					str_num++;
				}
			}
			if (init == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	else
	{
		for (init = n; init > 97; init--)
		{
			str_num = convert_to_string(init);
			while (*str_num != '\0')
			{
				_putchar(*str_num);
				str_num++;
			}
			if (init == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
/**
 * convert_to_string - convert to string
 * @num: input number
 *
 * Return: an output string
 */
char *convert_to_string(int num)
{
	int i, temp, index;
	char output[20], char_temp;
	char *result;

	output[0] = '\0';
	index = 0;
	temp = num;
	while (temp != 0)
	{
		for (i = index + 1; i > 0; i--)
		{
			output[i] = output[i - 1];
		}
		char_temp = (temp % 10) + '0';
		output[0] = char_temp;
		temp /= 10;
		index++;
	}
	result = output;
	return (result);
}
