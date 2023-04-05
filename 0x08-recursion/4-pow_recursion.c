#include "main.h"
/**
 * _pow_recursion - get x power y
 * @x: input number
 * @y: input power
 *
 * Return: power operation value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
