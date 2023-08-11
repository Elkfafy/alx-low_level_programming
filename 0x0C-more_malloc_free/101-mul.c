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
 * _atoi - atoi
 * @str: input string
 *
 * Return: number
 */
int _atoi(char *str)
{
	int i, num = 0;

	for (i = 0; str[i] != '\0'; i++)
		num = num * 10 + (str[i] - '0');
	return (num);
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
	result = _atoi(argv[1]) * _atoi(argv[2]);
	if (sign == -1)
		printf("-");
	printf("%d\n", result);
	return (0);
}
