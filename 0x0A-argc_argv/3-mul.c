#include <stdio.h>
#include <stdlib.h>
/**
 * main - mul function
 * @args: args
 * @argv: argv
 *
 * Return: 0
 */
int main(int args, char **argv)
{
	if (args != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
