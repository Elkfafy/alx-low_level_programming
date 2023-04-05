#include "main.h"
/**
 * helper - help to get square
 * @n: input number
 * @i: input index
 *
 * Return: sqaure root
 */
int helper(int n, int i)
{
	if (n - i == 0)
		return ((i / 2) + 1);
	if (n - i < 0)
		return (-1);
	return (helper(n - i, i + 2));
}
/**
 * _sqrt_recursion - get square root
 * @n: input number
 *
 * Return: square root of the number
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
