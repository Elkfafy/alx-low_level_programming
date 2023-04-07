#include <stdio.h>
#include <stdlib.h>
/**
 * main - change
 * @args: number of argsf
 * @argv: args
 *
 * Return: 0
 */
int main(int args, char *argv[])
{
	int i, count, num;
	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	count = 0;
	if (num <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; num > 0; i++)
	{
		if (num - 25 >= 0)
		{
			num = num - 25;
			count++;
		}
		else if (num - 10 >= 0)
		{
			num = num - 10;
			count++;
		}
		else if (num - 5 >= 0)
		{
			num = num - 5;
			count++;
		}
		else if (num - 2 >= 0)
		{
			num = num - 2;
			count++;
		}
		else if (num - 1 >= 0)
		{
			num = num - 1;
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
