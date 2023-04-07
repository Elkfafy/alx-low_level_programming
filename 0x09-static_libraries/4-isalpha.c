#include "main.h"
/**
 * _isalpha - check alpha
 * @c: input character
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= (int)'a' && c <= (int)'z') || (c >= (int)'A' && c <= (int)'Z'))
		return (1);
	return (0);
}
