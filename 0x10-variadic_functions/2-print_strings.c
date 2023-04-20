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
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
}
