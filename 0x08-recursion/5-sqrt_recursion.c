#include "main.h"
/**
 * sqrt_helper - helper for sqrt
 * @n: remaining of difference
 * @d: difference number
 *
 * Return: sqrt
 */
int sqrt_helper(int n, int d)
{
	int r;

	if (n - d < 0)
		return (-1);
	if (n - d == 0)
		return (1);
	r = sqrt_helper(n - d, d + 2);
	if (r < 0)
		return (-1);
	return (r + 1);
}
/**
 * _sqrt_recursion - get sqrt
 * @n: input number
 *
 * Return: sqrt result
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}
