#include <stdio.h>
#include <stdlib.h>
/**
 * main - add
 * @args: number of args
 * @argv: args
 *
 * Return: 0
 */
int main(int args, char *argv[])
{
	int i, sum, temp;

	if (args == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (i = 1; i < args; i++)
	{
		if (!argv[i][1] && *argv[i] == '0')
		{
			continue;
		}
		temp = atoi(argv[i]);
		if (temp == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += temp;
	}
	printf("%d\n", sum);
	return (0);
}
