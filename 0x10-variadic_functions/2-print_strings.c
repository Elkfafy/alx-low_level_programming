#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: input seperator
 * @n: input string number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *cont;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
		separator = "";
	va_start(args, n);
	printf("%s", va_arg(args, char *));
	for (i = 1; i < n; i++)
	{
		cont = va_arg(args, char *);
		if (cont == NULL)
			cont = "(nil)";
		printf("%s%s", separator, cont);
	}
	printf("\n");
	va_end(args);
}
