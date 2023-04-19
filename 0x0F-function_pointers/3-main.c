#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @args: arguments size
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int args, char *argv[])
{
	int (*op)(int, int);

	if (args != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
