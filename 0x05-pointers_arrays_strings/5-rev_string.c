#include "main.h"
/**
 * rev_string - rev of string
 * @s: input string
 */
void rev_string(char *s)
{
	char temp;
	int start, end;
	char *c;

	start = 0;
	end = -1;
	c = s;
	while (*c != '\0')
	{
		end++;
		c++;
	}
	while (start < end)
	{
		temp = *(s + start);
		*(s + start) = *(s + end);
		*(s + end) = temp;
		start++;
		end--;
	}
}
