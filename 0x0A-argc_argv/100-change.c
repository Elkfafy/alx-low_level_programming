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
	int i, num;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; num > 0; i++)
	{
		if (num - 25 >= 0)
			num = num - 25;
		else if (num - 10 >= 0)
			num = num - 10;
		else if (num - 5 >= 0)
			num = num - 5;
		else if (num - 2 >= 0)
			num = num - 2;
		else if (num - 1 >= 0)
			num = num - 1;
	}
	printf("%d\n", i);
	return (0);
}
