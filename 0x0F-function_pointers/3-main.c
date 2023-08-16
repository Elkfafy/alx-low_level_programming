#include "3-calc.h"
/**
 * main - calc main function
 * @args: args
 * @argv: argv
 *
 * Return: 0
 */
int main(int args, char **argv)
{
	if (args != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
