#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - last number
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastNumber;

	lastNumber = n % 10;
	printf("Last digit of %d is %d ", n, lastNumber);
	if (n > 5)
		puts("and is greater than 5");
	else if (n == 0)
		puts("and is 0");
	else
		puts("and is less than 6 and not 0");
	return (0);
}
