#include "main.h"
/**
 * set_string - set string to a pointer
 * @s: input source
 * @to: input destination
 */
void set_string(char **s, char *to)
{
	int i;
	
	for (i = 0; *(*s + i) != '\0'; i++)
		to[i] = *(*s + i);
}
