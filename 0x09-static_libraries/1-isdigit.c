#include "main.h"
/**
 * _isdigit - check if digit
 * @c: input character
 *
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= (int)'0' && c <= (int)'9')
		return (1);
	return (0);
}
