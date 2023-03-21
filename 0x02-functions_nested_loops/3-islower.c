#include "main.h"
/**
 * _islower - check if lower
 * @c: input
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= (int)'a' && c <= (int)'z')
		return (1);
	return (0);
}
