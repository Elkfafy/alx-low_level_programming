#include "main.h"
/**
 * string_nconcat - concatinating strings using n of s2
 * @s1: first string
 * @s2: second string
 * @n: input s2 number
 *
 * Return: pointer to a new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, start, size1 = 0, size2 = 0;
	char *result;

	if (s1 != NULL)
		for (; s1[size1] != '\0'; size1++)
			;
	if (s2 != NULL)
		for (; s2[size2] != '\0'; size2++)
			;
	if (size2 > n)
		size2 = n;
	result = malloc((size1 + size2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		result[i] = s1[i];
	start = i;
	for (; i < size1 + size2; i++)
		result[i] = s2[i - start];
	result[i] = '\0';
	return (result);
}
