#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: greater, equal or less than zero
 */
int _strcmp(char *s1, char *s2)
{
	int sum, i;

	sum = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
		{
			sum = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (sum);
}
