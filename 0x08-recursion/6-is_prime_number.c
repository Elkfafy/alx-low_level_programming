#include "main.h"
/**
 * helper - help to get if prime
 * @n: input number
 * @i: input index
 *
 * Return: 1 if prime 0 if not
 */
int helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (helper(n, i + 1));
}
/**
 * is_prime_number - check if prime
 * @n: input number
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	return (helper(n, 2));
}	
