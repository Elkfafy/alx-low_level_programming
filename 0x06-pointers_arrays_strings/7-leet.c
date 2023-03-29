#include "main.h"
/**
 * leet - leet algorithm
 * @str: input string
 *
 * Return: leet string
 */
char *leet(char *str)
{
	int container[128], i;

	for (i = 0; i < 128; i++)
		container[i] = i;
	container[65] = 4 + '0';
	container[97] = 4 + '0';
	container[69] = 3 + '0';
	container[101] = 3 + '0';
	container[79] = 0 + '0';
	container[111] = 0 + '0';
	container[84] = 7 + '0';
	container[116] = 7 + '0';
	container[76] = 1 + '0';
	container[108] = 1 + '0';
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = container[(int)str[i]];
		i++;
	}
	return (str);
}
