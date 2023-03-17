#include <stdio.h>
/**
 * main - lower and upper alphabet
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
	myChar = 'A';
	do {
		putchar(myChar);
	} while (myChar++ != 'Z');
	putchar('\n');
	return (0);
}
