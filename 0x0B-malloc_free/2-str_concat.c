#include "main.h"
/**
 * str_concat - concatinate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: result concatinating string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0, i;
	char *result;

	if (s1 != NULL)
		while (s1[size1] != '\0')
			size1++;
	if (s2 != NULL)
		while (s2[size2] != '\0')
			size2++;
	result = malloc((size1 + size2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		result[i] = s1[i];
	for (; i < (size1 + size2); i++)
		result[i] = s2[i - size1];
	result[i] = '\0';
	return (result);
}
