#include "main.h"
/**
 * strtow - string to words
 * @str: input string
 *
 * Return: array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, current = 0, word_size = 0;
	int space_count = 0, str_size = 0, isBlank = 0;
	char **result;
	char *start = str;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (str[str_size] != '\0')
	{
		if (str[str_size] == ' ' && isBlank == 0)
		{
			space_count++;
			isBlank = 1;
		}
		else if (str[str_size] == ' ')
		{
			str_size++;
			continue;
		}
		isBlank = 0;
		str_size++;
	}
	result = malloc((space_count) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && isBlank == 0)
		{
			result[current] = malloc((word_size + 1) * sizeof(char));
			if (result[current] == NULL)
			{
				for (; current >= 0; current--)
					free(result[current]);
				free(result);
				return (NULL);
			}
			for (j = 0; j < word_size; j++)
			{
				result[current][j] = *(start + j);
			}
			result[current][j] = '\0';
			start += j;
			current++;
			word_size = 0;
			j = 0;
			isBlank = 1;
		}
		else if (str[i] == ' ')
		{
			continue;
		}
		word_size++;
		isBlank = 0;
	}
	result[current] = NULL;
	return (result);
}
