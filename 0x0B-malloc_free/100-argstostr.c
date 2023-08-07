#include "main.h"
/**
 * argstostr - args to str
 * @ac: argc
 * @av: argv
 *
 * Return: concatinating string
 */
char *argstostr(int ac, char **av)
{
	int i, j, str_size, current = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str_size++;
		str_size++;
	}
	result = malloc((str_size + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[current] = av[i][j];
			current++;
		}
		result[current] = '\n';
		current++;
	}
	result[current] = '\0';
	return (result);
}
