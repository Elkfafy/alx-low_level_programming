#include "main.h"
/**
 * ar_env - env function
 * @av: input av
 * Return: status
 */
int ar_env(char ** av UNUSED)
{
	extern char **environ;
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		ar_puts(environ[i]);
		ar_putchar('\n');
	}
	return (1);
}
