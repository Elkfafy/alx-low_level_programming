#include <stdio.h>
#include <stdlib.h>
/**
 * main - get op code
 * @args: arg size
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int args, char *argv[])
{
	char *opc = (char *)main;
	int i, nbytes;

	if (args != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & 0xff);
		if (i != nbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
