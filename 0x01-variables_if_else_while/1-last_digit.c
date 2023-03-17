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
	int lastNumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastNumber = n % 10;
	printf("Last digit of %d is %d ", n, lastNumber);
	if (lastNumber > 5)
		puts("and is greater than 5");
	else if (lastNumber == 0)
		puts("and is 0");
	else
		puts("and is less than 6 and not 0");
	return (0);
}
