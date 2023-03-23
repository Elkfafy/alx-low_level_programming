#include <stdio.h>
#include <math.h>

long int memo[1000];
int pmemo[1000];
/**
 * isPrime - check if prime
 * @num: input number
 *
 * Return: true if prime false if not
 */
int isPrime(long int num)
{
	int i;

	if (pmemo[num] != 0)
		return (pmemo[num]);
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			return (-1);
	}
	return (1);
}
/**
 * getFact - get largest factor
 * @num: input number
 *
 * Return: largest factor
 */
long int getFact(long int num)
{
	long int first, second, i;

	if (memo[num] != 0)
		return (memo[num]);
	if (isPrime(num) == 1)
		return (num);
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			first = getFact(i);
			second = getFact(num / i);
			if (first > second)
				memo[num] = first;
			else
				memo[num] = second;
			return (memo[num]);
		}
	}
	return (0);
}
/**
 * main - print largest factor
 *
 * Return: 0
 */
int main(void)
{
	long int num;

	num = 612852475143;	
	printf("%ld\n", getFact(num));
	return (0);
}
