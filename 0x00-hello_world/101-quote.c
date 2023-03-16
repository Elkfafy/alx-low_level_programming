#include <stdio.h>
/**
 * main - print quote
 *
 * Return: 1
 */
int main(void)
{
	char *string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	while (*string != '\0')
	{
		putchar(*string);
		string++;
	}
	putchar('\n');
	return (1);
}
