#include "main.h"
/**
 * set_bit - set bit
 * @n: input number
 * @index: input index
 *
 * Return: 1 work -1 not worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index > (8 * 8))
		return (-1);
	temp = (1 << index);
	if ((*n & temp) != temp)
		*n += temp;
	return (1);
}
