#include "main.h"
/**
 * pow_t - power two
 * @i: input i
 *
 * Return: power of two of i
 */
unsigned long int pow_t(unsigned long int i)
{
	if (i == 0)
		return (1);
	return (2 * pow_t(i - 1));
}
/**
 * get_bit - get bit
 * @n: input n
 * @index: input index
 *
 * Return: bit in index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & pow_t(index)) == pow_t(index));
}
