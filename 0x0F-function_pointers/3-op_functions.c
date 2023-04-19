#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - operation add
 * @a: first input
 * @b: second input
 *
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - operation sub
 * @a: first input
 * @b: second input
 *
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - operation mul
 * @a: first input
 * @b: second input
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - operation div
 * @a: first input
 * @b: second input
 *
 * Return: division
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
 * op_mod - operation mod
 * @a: first input
 * @b: second input
 *
 * Return: modulous
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
