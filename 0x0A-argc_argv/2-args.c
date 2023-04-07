#include <stdio.h>
/**
 * main - print args
 * @args: number of args
 * @argv: vector of args
 *
 * Return: 0
 */
int main(int args, char *argv[])
{
	int i;

	for (i = 0; i < args; i++)
		printf("%s\n", argv[i]);
	return (0);
}
