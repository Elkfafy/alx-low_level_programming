#include <stdio.h>
/**
 * main - single digit number combination
 *
 * Return: 0
 */
int main(void)
{
	int myNum;

	for (myNum = 0; myNum < 10; myNum++)
	{
		putchar('0' + myNum);
		if (myNum != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
