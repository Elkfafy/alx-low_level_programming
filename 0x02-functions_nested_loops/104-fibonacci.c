#include <stdio.h>
/**
 * main - 98 fibonacci
 *
 * Return: 0
 */
int main(void)
{
	unsigned long firstNum, secondNum, fib;
	int i;

	firstNum = 1;
	secondNum = 2;
	printf("%lu, %lu, ", firstNum, secondNum);
	for (i = 2; i < 97; i++)
	{
		fib = firstNum + secondNum;
		printf("%lu, ", fib);
		firstNum = secondNum;
		secondNum = fib;
	}
	printf("%lu\n", firstNum + secondNum);
	return (0);
}
