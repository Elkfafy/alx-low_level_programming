#include "variadic_functions.h"
/**
 * print_form - print depending on the format
 * @c: input format character
 * @args: input va list
 */
void print_form(char c, va_list *args)
{
	char *cont;

	switch (c)
	{
		case 'c':
			printf("%c", va_arg(*args, int));
			break;
		case 'i':
			printf("%d", va_arg(*args, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(*args, double));
			break;
		case 's':
			cont = va_arg(*args, char *);
			if (cont == NULL)
				cont = "(nil)";
			printf("%s", cont);
			break;
	}
}
/**
 * print_all - print all depending on format string
 * @format: input format string
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;

	if (format == NULL || format[0] == '\0')
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	print_form(format[i], &args);
	i++;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				printf(", ");
				break;
		}
		print_form(format[i], &args);
		i++;
	}
	printf("\n");
	va_end(args);
}
