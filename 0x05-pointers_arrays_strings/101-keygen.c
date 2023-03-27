#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - password generator
 *
 * Return: 0
 */
int main(void)
{
	time_t t;

	srand((unsigned) time(&t));

	printf("%d", rand());
	return (0);
}
