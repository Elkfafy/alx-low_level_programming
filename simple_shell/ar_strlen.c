#include "main.h"
/**
 * ar_strlen - string length
 * @str: input string
 * Return: string length
 */
int ar_strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
