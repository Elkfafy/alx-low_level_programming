#include "main.h"
/**
 * prime_helper - get prime using recursion
 * @n: input number
 * @i: value of i
 *
 * Return: prime number
 */
int prime_helper(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_helper(n, i + 1));
}
/**
 * is_prime_number - check if prime
 * @n: input number
 *
 * Return: prime or not in int
 */
int is_prime_number(int n)
{
	if (n <= 2)
		return (0);
	return (prime_helper(n, 2));
}
