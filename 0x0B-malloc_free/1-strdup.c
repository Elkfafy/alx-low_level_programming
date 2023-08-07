#include "main.h"
/**
 * _strdup - string duplicate
 * @str: input string
 *
 * Return: a pointer to the duplicate string
 */
char *_strdup(char *str)
{
	unsigned int str_size = 0, i;
	char *dub_str;

	if (str == NULL)
		return (NULL);
	while (str[str_size] != '\0')
		str_size++;
	dub_str = malloc(sizeof(char) * (str_size + 1));
	if (dub_str == NULL)
		return (NULL);
	for (i = 0; i < str_size; i++)
	{
		dub_str[i] = str[i];
	}
	return (dub_str);
}
