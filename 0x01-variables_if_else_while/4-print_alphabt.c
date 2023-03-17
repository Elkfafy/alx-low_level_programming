#include <stdio.h>
/**
 * main - alphabet except 'q' and 'e'
 *
 * Return: 0
 */
int main(void)
{
	char myChar;

	myChar = 'a';
	do {
		if (myChar == 'q' || myChar == 'e')
			continue;
		putchar(myChar);
	} while (myChar++ != 'z');
	putchar('\n');
	return (0);
}
