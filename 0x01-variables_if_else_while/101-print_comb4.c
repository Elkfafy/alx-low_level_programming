#include <stdio.h>
/**
 * main - three digit combination
 *
 * Return: 0
 */
int main(void)
{
	int firstNum, secondNum, thirdNum;

	for (firstNum = 0; firstNum < 10; firstNum++)
		for (secondNum = firstNum + 1; secondNum < 10; secondNum++)
			for (thirdNum = secondNum + 1; thirdNum < 10; thirdNum++)
			{
				putchar('0' + firstNum);
				putchar('0' + secondNum);
				putchar('0' + thirdNum);
				putchar(',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
