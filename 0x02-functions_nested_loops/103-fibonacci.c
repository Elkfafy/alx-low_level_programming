#include <stdio.h>
/**
 * main - even abbaci
 *
 * Return: 0
 */
int main(void)
{
	long sum, fab, firstNumber, secondNumber;

	firstNumber = 1;
	secondNumber = 2;
	sum = 2;
	fab = firstNumber + secondNumber;
	while (fab < 4000000)
	{
		if (fab % 2 == 0)
			sum += fab;
		firstNumber = secondNumber;
		secondNumber = fab;
		fab = firstNumber + secondNumber;
	}
	printf("%ld\n", sum);
	return (0);
}
