#include <stdio.h>
/**
 * main - print args minus one
 * @args: arguments size
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int args, __attribute__((unused)) char **argv)
{
	printf("%d\n", args - 1);
	return (0);
}
