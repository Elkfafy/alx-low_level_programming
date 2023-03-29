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
	int i, flag;

	flag = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (contain(" \t\n\",;.!?(){}", str[i]))
			flag = 1;
		else
		{
			if (flag == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 'a' - 'A';
			else if (flag == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 'a' - 'A';
			flag = 0;
		}
	}
	return (str);
}
