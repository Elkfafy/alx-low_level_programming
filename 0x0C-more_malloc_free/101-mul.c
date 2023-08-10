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
		i++;
	for (; i < size; i++)
		printf("%d", num[i]);
	printf("\n");
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
 * main - mul function using large string numbers
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int *mul_result, i, j;
	int num1_size, num2_size;

	if (argc != 3)
	{
		printf("Error from argc\n");
		exit(98);
	}
	num1_size = get_num_size(argv[1]);
	num2_size = get_num_size(argv[2]);
	mul_result = malloc((num1_size + num2_size) * sizeof(int));
	if (mul_result == NULL)
	{
		printf("Error");
		exit(98);
	}
	set_int_arr(mul_result, num1_size + num2_size);
	rev_str(argv[1], num1_size);
	rev_str(argv[2], num2_size);
	for (i = 0; i < num1_size; i++)
		for (j = 0; j < num2_size; j++)
			mul_result[i + j] += (argv[1][i] - '0') * (argv[2][j] - '0');
	for (i = 0; i < num1_size + num2_size - 1; i++)
	{
		j = mul_result[i];
		mul_result[i] = j % 10;
		mul_result[i + 1] += j / 10;
	}
	rev_int(mul_result, num1_size + num2_size);
	print_num(mul_result, num1_size + num2_size);
	return (0);
}
