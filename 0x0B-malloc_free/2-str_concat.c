#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - concating string
 * @s1: first string
 * @s2: second string
 *
 * Return: new concatened string
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
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
	for (i = 0; i < size1; i++)
		str[i] = s1[i];
	for (; i <= (size1 + size2); i++)
		str[i] = s2[i - size1];
	return (str);
}
