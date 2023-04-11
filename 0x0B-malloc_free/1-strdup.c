#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - copy string to new location
 * @str: input string
 *
 * Return: pointer to new location
 */
char *_strdup(char *str)
{
	int size, i;
	char *cpStr;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	cpStr = (char *)malloc(sizeof(char) * size);
	if (!cpStr)
		return (NULL);
	for (i = 0; i < size; i++)
		cpStr[i] = str[i];
	return (cpStr);
}
