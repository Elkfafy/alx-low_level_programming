#include "main.h"
/**
 * get_num_size - get number size
 * @str: input string
 *
 * Return: number size
 */
int get_num_size(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (str[count] <= '0' && str[count] >= '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (count);
}
/**
 * rev_int - reverse the int array
 * @arr: input array
 * @size: input size
 *
 * Return: the reversed array
 */
int *rev_int(int *arr, int size)
{
	int temp;
	int start = 0, last = size - 1;

	while (start < last)
	{
		temp = arr[start];
		arr[start] = arr[last];
		arr[last] = temp;
		start++;
		last--;
	}
	return (arr);
}
/**
 * rev_str - reverse the string
 * @str: input string
 * @size: input size
 *
 * Return: reversed string
 */
char *rev_str(char *str, int size)
{
	char temp;
	int start = 0, last = size - 1;

	while (start < last)
	{
		temp = str[start];
		str[start] = str[last];
		str[last] = temp;
		start++;
		last--;
	}
	return (str);
}
/**
 * print_num - print number
 * @num: input num buffer
 * @size: input string size
 */
void print_num(int *num, int size)
{
	int i = 0;

	while (num[i] == 0)
	{
		if (i >= size)
		{
			_putchar('0');
			_putchar('\n');
			return;
		}
		i++;
	}
	for (; i < size; i++)
		_putchar(num[i] + '0');
	_putchar('\n');
}
/**
 * set_int_arr - set elements of int arr to zero
 * @arr: input array
 * @size: input array size
 *
 * Return: set each element to zero
 */
int *set_int_arr(int *arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
		arr[i] = 0;
	return (arr);
}
/**
 * mul - mul function
 * @fnum: input first number
 * @flen: input first length
 * @snum: input second number
 * @slen: input second length
 * @rnum: input result container
 * @rlen: input result length
 *
 * Return: result pointer
 */
int *mul(char *fnum, int flen, char *snum,
		int slen, int *rnum, int rlen)
{
	int i, j;

	rev_str(fnum, flen);
	rev_str(snum, slen);
	for (i = 0; i < flen; i++)
		for (j = 0; j < slen; j++)
			rnum[i + j] += (fnum[i] - '0') * (snum[j] - '0');
	for (i = 0; i < rlen - 1; i++)
	{
		j = rnum[i] / 10;
		rnum[i] %= 10;
		rnum[i + 1] += j;
	}
	rev_int(rnum, rlen);
	return (rnum);
}
/**
 * main - mul function using large string numbers
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int *mul_result;
	char *temp_arr;
	int num1_size, num2_size, sign = 1, temp;

	if (argc != 3)
	{
		printf("Error\n"), exit(98);
	}
	if (argv[1][0] == '-')
	{
		sign *= -1, argv[1]++;
	}
	if (argv[2][0] == '-')
	{
		sign *= -1, argv[2]++;
	}
	num1_size = get_num_size(argv[1]);
	num2_size = get_num_size(argv[2]);
	if (num1_size > num2_size)
	{
		temp_arr = argv[1], argv[1] = argv[2];
		argv[2] = temp_arr, temp = num1_size;
		num1_size = num2_size, num2_size = temp;
	}
	mul_result = malloc((num1_size + num2_size) * sizeof(int));
	if (mul_result == NULL)
	{
		printf("Error");
		exit(98);
	}
	set_int_arr(mul_result, num1_size + num2_size);
	mul(argv[1], num1_size, argv[2], num2_size,
			mul_result, num1_size + num2_size);
	if (sign == -1)
		_putchar('-');
	print_num(mul_result, num1_size + num2_size);
	return (0);
}
