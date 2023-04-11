#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * argstostr - conaticating args
 * @ac: args count
 * @av: args vector
 *
 * Return: concatinating string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int sumSize, i, j;

	if (ac <= 0)
		return (NULL);
	sumSize = 1;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			sumSize += 1;
		}
		sumSize += 1;
	}
	str = (char *)malloc(sumSize * sizeof(char));
	if (!sumSize)
		return (NULL);
	sumSize = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[sumSize] = av[i][j];
			sumSize++;
		}
		str[sumSize] = '\n';
		sumSize++;
	}
	str[sumSize] = '\0';
	return (str);
}
