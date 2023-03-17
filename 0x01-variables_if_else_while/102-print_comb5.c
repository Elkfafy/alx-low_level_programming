#include <stdio.h>
/**
 * main - two two digit combination
 *
 * Return: 0
 */
int main(void)
{
	int firstNum, secondNum;

	for (firstNum = 0; firstNum < 100; firstNum++)
		for (secondNum = firstNum + 1; secondNum < 100; secondNum++)
		{
			putchar('0' + firstNum / 10);
			putchar('0' + firstNum % 10);
			putchar(' ');
			putchar('0' + secondNum / 10);
			putchar('0' + secondNum % 10);
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
