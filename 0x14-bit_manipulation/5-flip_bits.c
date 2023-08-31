#include "main.h"
/**
 * flip_bits - flip bits
 * @n: input number
 * @m: wanted number
 *
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int n_bit, m_bit, count = 0;

	while (n != 0 || m != 0)
	{
		n_bit = n & 1;
		m_bit = m & 1;
		if (n_bit != m_bit)
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
