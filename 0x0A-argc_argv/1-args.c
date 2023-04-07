#include <stdio.h>
/**
 * main - print args
 * @args: number of args
 * @argv: the args
 *
 * Return: 0
 */
int main(int args, char *argv[] __attribute__((unused)))
{
	printf("%d\n", args - 1);
	return (0);
}
