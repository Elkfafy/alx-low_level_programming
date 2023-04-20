#include "variadic_functions.h"
/**
 * print_strings - print strings with separator
 * @separator: input seperator
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
}
