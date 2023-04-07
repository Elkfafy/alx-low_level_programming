#include <stdio.h>
#include <stdlib.h>
/**
 * main - mul
 * @args: number of args
 * @argv: vector of args
 *
 * Return: 0
 */
int main(int args, char *argv[])
{
	if (args != 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
