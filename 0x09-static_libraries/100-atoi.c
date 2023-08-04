#include "main.h"
#include <limits.h>
/**
 * _atoi - turn string to int
 * @s: input string
 *
 * Return: int value
 */
int _atoi(char *s)
{
	int sign, flag;
	signed int sum;

	sign = 1;
	sum = 0;
	flag = 0;
	while (*s != '\0')
	{
		if (*s == '0' ||
			*s == '1' ||
			*s == '2' ||
			*s == '3' ||
			*s == '4' ||
			*s == '5' ||
			*s == '6' ||
			*s == '7' ||
			*s == '8' ||
			*s == '9')
		{
			sum *= 10;
			if (sign == -1 && sum + INT_MIN == -((int)*s - (int)'0'))
			{
				sum = -sum;
				sum -= ((int)*s - (int)'0');
				return (sum);
			}
			sum += (int)*s - (int)'0';
			flag = 1;
		}
		else if (flag == 1)
			break;
		if (*s == '-')
			sign = -sign;
		s++;
	}
	return (sum * sign);
}
