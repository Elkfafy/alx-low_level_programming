#include "main.h"
/**
 * convert - get string from int
 * @num: input number
 * Return: string of the number
 */
char *convert(int num)
{
	char buffer[3];
	char *out;

	if (num < 10)
	{
		buffer[0] = num + '0';
		buffer[1] = '\0';
	}
	else
	{
		buffer[0] = num / 10 + '0';
		buffer[1] = num % 10 + '0';
		buffer[2] = '\0';
	}
	out = buffer;
	return (out);
}
/**
 * more_numbers - 0-14
 */
void more_numbers(void)
{
	int i, j;
	char *str;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			str = convert(j);
			while (*str != '\0')
			{
				_putchar(*str);
				str++;
			}
		}
		_putchar('\n');
	}
}
