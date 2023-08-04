#include <stdio.h>
#include <stdlib.h>
/**
 * main - change program
 * @args: args
 * @argv: argv
 *
 * Return: 0
 */
int main(int args, char **argv)
{
	int cents, count = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
