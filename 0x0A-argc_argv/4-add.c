#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _isnumber - is number
 * @str: input string
 *
 * Return: one true zero false
 */
int _isnumber(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] < '0' || str[i] > '9')
			return (0);
	return (1);
}
/**
 * main - add function
 * @args: args
 * @argv: argv
 *
 * Return: 0
 */
int main(int args, char **argv)
{
	int i, sum = 0;

	if (args == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < args; i++)
	{
		if (_isnumber(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
