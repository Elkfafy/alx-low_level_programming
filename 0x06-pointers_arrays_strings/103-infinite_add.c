#include "main.h"
/**
 * _sum - sum 2 chars
 * @n1: first number
 * @n2: second number
 *
 * Return: n1 + n2
 */
int _sum(char n1, char n2)
{
	return (((int)n1 - '0') + ((int)n2 - '0'));
}
/**
 * infinite_add - add two numbers
 * @n1: first number
 * @n2: second number
 * @r: output result
 * @size_r: size of r
 *
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size_n1, size_n2, carry, sum;

	size_n1 = 0;
	size_n2 = 0;
	while (n1[size_n1] != '\0')
		size_n1++;
	while (n2[size_n2] != '\0')
		size_n2++;
	if (size_r < size_n1 ||
		size_r < size_n2 ||
		(size_n1 == size_n2 &&
		 size_n1 == size_r &&
		 (_sum(n1[0], n2[0]) > 9 ||
		  _sum(_sum(n1[0], n2[0]) + '0', '1'))))
		return (0);
	size_n1--;
	size_n2--;
	size_r--;
	while (size_n1 >= 0 || size_n1 >= 0)
	{
		sum = _sum(_sum(n1[size_n1], n2[size_n2]) + '0', carry + '0');
		carry = sum / 10;
		r[size_r] = sum % 10 + '0';
		size_n1--;
		size_n2--;
		size_r--;
	}
	while (size_n1 >= 0)
	{
		sum = _sum(n1[size_n1], carry + '0');
		carry = sum / 10;
		r[size_r] = sum % 10 + '0';
		size_n1--;
		size_n2--;
		size_r--;
	}
	while (size_n2 >= 0)
	{
		sum = _sum(n2[size_n2], carry + '0');
		carry = sum / 10;
		r[size_r] = sum % 10 + '0';
		size_n1--;
		size_n2--;
		size_r--;
	}
	return (r);
}
