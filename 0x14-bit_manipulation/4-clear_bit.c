#include "main.h"
/**
 * clear_bit - clear bit
 * @n: input number
 * @index: input index
 *
 * Return: success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index > (8 * 8))
		return (-1);
	temp = 1 << index;
	if ((*n & temp) == temp)
		*n -= temp;
	return (1);
}
