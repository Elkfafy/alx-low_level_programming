#include <stdio.h>
/**
 * main - two digit combination
 *
 * Return: 0
 */
int main(void)
{
	int firstNum, secondNum;

	for (firstNum = 0; firstNum < 10; firstNum++)
		for (secondNum = firstNum + 1; secondNum < 10; secondNum++)
		{
			putchar('0' + firstNum);
			putchar('0' + secondNum);
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
