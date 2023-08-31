#include "main.h"
/**
 * pow_two - two power
 * @i: input us
 *
 * Return: the power of 2 of i
 */
unsigned int pow_two(int i)
{
	if (i < 0)
		return (0);
	if (i == 0)
		return (1);
	return (2 * pow_two(i - 1));
}
/**
 * binary_to_uint - binary to unsigned int
 * @b: input binary string
 *
 * Return: the output unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num = 0, str_len;

	if (b == NULL)
		return (0);
	for (str_len = 0; b[str_len] != '\0'; str_len++)
		;
	for (i = 0; i < str_len; i++)
	{
		if (b[str_len - i - 1] != '1' && b[str_len - i - 1] != '0')
			return (0);
		num += (pow_two(i) * (b[str_len - i - 1] - '0'));
	}
	return (num);
}
