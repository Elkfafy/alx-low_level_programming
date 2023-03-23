#include "main.h"
/**
 * _isupper - if uppercase
 *@c: input character
 *
 * Return: 1, 0
 */
int _isupper(int c)
{
	if (c >= (int)'A' && c <= (int)'Z')
		return (1);
	return (0);
}
