#include <stdio.h>
/**
 * main - alphabet
 *
 * Return: 0
 */
int main(void)
{
	char myChar;

	myChar = 'z';
	do {
		putchar(myChar);
	} while (myChar-- != 'a');
	putchar('\n');
	return (0);
}
