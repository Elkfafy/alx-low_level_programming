#include "main.h"
/**
 * wild_helper - help to wild
 * @s1: first string
 * @s2: second string
 * @is_wild: if wild before
 *
 * Return: true or false
 */
int wild_helper(char *s1, char *s2, int is_wild)
{
	if (*s2 == '*')
		return (wild_helper(s1, s2 + 1, 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '\0' && is_wild == 0)
		return (0);
	if (*s2 == '\0' && is_wild == 1)
		return (1);
	if (*s1 != *s2 && is_wild == 0)
		return (0);
	if (*s1 != *s2 && is_wild == 1)
		return (wild_helper(s1 + 1, s2, 1));
	return (wild_helper(s1 + 1, s2 + 1, 0));
}
/**
 * wildcmp - wild compare
 * @s1: input first string
 * @s2: input wild second string
 *
 * Return: true or false
 */
int wildcmp(char *s1, char *s2)
{
	return (wild_helper(s1, s2, 0));
}
