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
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	printf("%02x", cont[i] & 0xFF);
	i++;
	for (; i < atoi(argv[1]); i++)
		printf(" %02x", cont[i] & 0xFF);
	printf("\n");
	return (0);
}
