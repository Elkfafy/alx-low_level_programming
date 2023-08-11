#include "main.h"
/**
 * str_len - length of string
 * @str: input string
 *
 * Return: size of string
 */
int str_len(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
		if (str[size] < '0' || str[size] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	return (size);
}
/**
 * main - mul function
 * @argc: input argc
 * @argv: input argv
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int result = 0, sign = 1;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1][0] == '-')
	{
		sign *= -1;
		argv[1]++;
	}
	if (argv[2][0] == '-')
	{
		sign *= -1;
		argv[2]++;
	}
	str_len(argv[1]);
	str_len(argv[2]);
	result = atoi(argv[1]) * atoi(argv[2]);
	if (sign == -1)
		printf("-");
	printf("%d\n", result);
	return (0);
}
