#include <stdio.h>
/**
 * main - numbers
 *
 * Return: 0
 */
int main(void)
{
	int myNum;

	for (myNum = 0; myNum < 10; myNum++)
		putchar('0' + myNum);
	putchar('\n');
	return (0);
}
