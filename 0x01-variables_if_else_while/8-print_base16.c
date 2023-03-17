#include <stdio.h>
/**
 * main - hexadecimal
 *
 * Return: 0
 */
int main(void)
{
	int myChar;

	myChar = '0';
	do {
		putchar(myChar);
	} while (myChar++ != '9');
	myChar = 'a';
	do {
		putchar(myChar);
	} while (myChar++ != 'f');
	putchar('\n');
	return (0);
}
