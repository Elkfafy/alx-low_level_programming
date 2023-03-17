#include <stdio.h>
/**
 * main - alphabet
 *
 * Return: 0
 */
int main(void)
{
	char myChar;

	myChar = 'a';
	do {
		putchar(myChar);
	} while (myChar++ != 'z');
	putchar('\n');
	return (0);
}
