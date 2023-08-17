#include "variadic_functions.h"
/**
 * print_numbers - print numbers with seperator
 * @separator: separator of output
 * @n: input numbers number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
		separator = "";
	va_start(args, n);
	printf("%d", va_arg(args, int));
	for (i = 1; i < n; i++)
		printf("%s%d", separator, va_arg(args, int));
	printf("\n");
	va_end(args);
}
