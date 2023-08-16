#include "3-calc.h"
/**
 * op_add - add operation
 * @a: first number
 * @b: second number
 *
 * Return: add result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction operation
 * @a: first number
 * @b: second number
 *
 * Return: subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication operation
 * @a: first number
 * @b: second number
 *
 * Return: multiplication operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division operation
 * @a: first number
 * @b: second number
 *
 * Return: division result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulus operation
 * @a: first number
 * @b: second number
 *
 * Return: modulus operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
