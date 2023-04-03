#include "main.h"
#include <stddef.h>
/**
 * compare - compare string with substring
 * @str: input string
 * @sub: input substring
 * Return: 1 for true, 0 for false
 */
int compare(char *str, char *sub)
{
	int i, strSize, subSize;

	if (*sub == '\0')
		return (0);
	for (strSize = 0; str[strSize] != '\0'; strSize++)
		;
	for (subSize = 0; sub[subSize] != '\0'; subSize++)
		;
	if (strSize < subSize)
		return (0);
	for (i = 0; sub[i] != '\0'; i++)
	{
		if (sub[i] != str[i])
			return (0);
	}
	return (1);
}
/**
 * _strstr - get the address of first char of substring
 * @haystack: input string
 * @needle: input substring
 *
 * Return: pointer to the first char of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, hSize, nSize;

	for (hSize = 0; haystack[hSize] != '\0'; hSize++)
		;
	for (nSize = 0; needle[nSize] != '\0'; nSize++)
		;
	if (hSize < nSize)
		return (NULL);
	for (i = 0; i < hSize; i++)
	{
		if (haystack[i] == needle[0] && compare(&haystack[i], needle))
			return (&haystack[i]);
	}
	return (NULL);
}
