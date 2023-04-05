#include "main.h"
/**
 * size - size of string
 * @s: input string
 *
 * Return: size
 */
int size(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + size(s + 1));
}
/**
 * helper - help to check if palindrome
 * @s: string
 * @start: first char index
 * @end: last char index
 *
 * Return: 1 if true 0 if false
 */
int helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - check if palindrome
 * @s: input string
 *
 * Return: 1 if true 0 if false
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (helper(s, 0, size(s) - 1));
}
