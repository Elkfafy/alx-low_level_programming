#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * strtow - split str into words
 * @str: input string
 *
 * Return: array of strings
 */
char **strtow(char *str)
{
	char **myStr;
	int wordsNum, wordSize, i, j, z;

	if (str == NULL || *str == '\0' || *str == ' ')
		return (NULL);
	wordsNum = 2;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			wordsNum++;
	}
	myStr = (char **)malloc(wordsNum * sizeof(char *));
	if (!myStr)
		return (NULL);
	j = 0;
	for (i = 0; i < wordsNum - 1; i++)
	{
		for (wordSize = j; str[wordSize] != ' '; wordSize++)
			;
		myStr[i] = (char *)malloc((wordSize + 1) * sizeof(char));
		if (!myStr[i])
		{
			for (j = 0; j < i; j++)
				free(myStr[j]);
			free(myStr);
			return (NULL);
		}
		for (z = j; z < wordSize + j; z++)
			myStr[i][z - j] = str[j];
		myStr[i][z - j] = '\0';
		j = z + 1;
	}
	return (myStr);
}
			
