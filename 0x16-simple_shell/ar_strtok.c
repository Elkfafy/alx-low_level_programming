#include "main.h"
/**
 * ar_strtok - string token
 * @str: input string
 * @delim: input delim
 * Return: token
 */
char *ar_strtok(char *str, const char *delim)
{
	return (strtok(str, delim));
}
