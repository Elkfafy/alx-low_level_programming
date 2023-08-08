#include "main.h"
/**
 * count_word - count words
 * @str: input string
 *
 * Return: return words count
 */
int count_word(char *str)
{
	int i, word_count = 0, isBlank = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (isBlank)
				word_count++;
			isBlank = 0;
			continue;
		}
		isBlank = 1;
	}
	return (word_count);
}
/**
 * strtow - string to words
 * @str: input string
 *
 * Return: array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, start, word_count, current = 0;
	char **result;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = count_word(str);
	if (word_count < 1)
		return (NULL);
	result = malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j] != ' '; j++)
				;
			result[current] = malloc((j - i + 1) * sizeof(char));
			if (result[current] == NULL)
			{
				for (; current >= 0; current--)
					free(result[current]);
				free(result);
				return (NULL);
			}
			start = i;
			for (; i < j; i++)
				result[current][i - start] = str[i];
			result[current][i - start] = '\0';
			current++;
		}
	}
	result[current] = NULL;
	return (result);
}
