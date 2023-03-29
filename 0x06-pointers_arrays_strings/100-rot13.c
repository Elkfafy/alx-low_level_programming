#include "main.h"
/**
 * fill - fill array
 * @arr: input array
 * @start: starting point
 * @end: ending point
 * @fStart: fill starting point
 */
void fill(int *arr, int start, int end, int fStart)
{
	for (; start <= end; start++)
	{
		arr[start] = fStart;
		fStart++;
	}
}
/**
 * rot13 - get rot13 of the array
 * @str: input string
 *
 * Return: rot13 string
 */
char *rot13(char *str)
{
	int con[128], i;

	fill(con, 0, 127, 0);
	fill(con, 65, 77, 78);
	fill(con, 78, 90, 65);
	fill(con, 97, 109, 110);
	fill(con, 110, 122, 97);
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = con[(int)str[i]];
		i++;
	}
	return (str);
}
