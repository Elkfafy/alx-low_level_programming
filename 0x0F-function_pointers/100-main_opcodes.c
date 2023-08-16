#include <stdio.h>
#include <stdlib.h>
/**
 * main - print op code
 * @argc: args
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *cont = (char *)&main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
		printf("0x%02x ", cont[i] & 0xFF);
	printf("\n");
	return (0);
}
