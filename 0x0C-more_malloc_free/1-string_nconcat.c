#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - concating n string
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2
 *
 * Return: new concatened string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i;
	char *str;

	size1 = 0;
	size2 = 0;
	if (s1 != NULL)
		for (; s1[size1] != '\0'; size1++)
			;
	if (s2 != NULL)
		for (; s2[size2] != '\0'; size2++)
			;
	str = (char *)malloc((size1 + size2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	for (; i < size1; i++)
		str[i] = s1[i];
	for (; i < (size1 + size2) && i < (size1 + n); i++)
		str[i] = s2[i - size1];
	str[i] = '\0';
	return (str);
}
