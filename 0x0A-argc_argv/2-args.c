#include <stdio.h>
/**
 * main - print all args
 * @args: args
 * @argv: argv
 *
 * Return: 0
 */
int main(int args, char **argv)
{
	int i;

	for (i = 0; i < args; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
