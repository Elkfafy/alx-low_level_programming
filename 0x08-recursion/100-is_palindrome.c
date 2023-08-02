#include "main.h"
/**
 * str_len - get length of string
 * @s: input string
 *
 * Return: length
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (str_len(s + 1) + 1);
}
/**
 * pal_helper - helper to palindrome
 * @str: input string
 * @start: input start index
 * @end: input last index
 *
 * Return: if palindrome
 */
int pal_helper(char *str, int start, int end)
{
	if (start > end)
		return (1);
	if (str[start] != str[end])
		return (0);
	return (pal_helper(str, start + 1, end - 1));
}
/**
 * is_palindrome - if palindrome
 * @s: input string
 *
 * Return: false zero true one
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (pal_helper(s, 0, str_len(s) - 1));
}
