#include "main.h"
/**
 * contain - string contain character
 * @str: input string
 * @c: input character
 *
 * Return: 1 if contain 0 if not
 */
int contain(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
		{
			return (1);
		}
		str++;
	}
	return (0);
}
/**
 * cap_string - capatalize string
 * @str: input string
 *
 * Return: capatalized string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (contain("\t\n, ;.!?\"(){}", str[i]) &&
			str[i + 1] >= 'a' &&
			str[i + 1] <= 'z')
		{
			str[i + 1] -= 'a' - 'A';
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && i)
			str[i] += 'a' - 'A';
	}
	return (str);
}
