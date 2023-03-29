#include "main.h"
/**
 * string_toupper - change all lowercase characters to uppercase
 * @str: input string
 *
 * Return: the new string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if  (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
	}
	return (str);
}
