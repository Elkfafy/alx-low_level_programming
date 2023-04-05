#include "main.h"
/**
 * wildcmp - wild compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 true 0 false
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1
