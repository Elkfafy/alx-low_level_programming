#include "main.h"
/**
 * get_endianness - get endianness
 *
 * Return: endianness
 */
int get_endianness(void)
{
	int x = 1;
	char *y = (char *)&x;

	return (*y);
}
