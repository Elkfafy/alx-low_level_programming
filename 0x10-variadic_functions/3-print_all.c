#include "variadic_functions.h"
/**
 * opt_t - key to function type
 */
typedef struct key
{
	char c;
	void (*func)(va_list);
} opt_t;
/**
 * print_char - print character
 * @list: input list
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_int - print integer
 * @list: input list
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_float - print float
 * @list: input list
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_str - print string
 * @list: input list
 */
void print_str(va_list list)
{
	char *cont = va_arg(list, char *);
	
	if (cont == NULL)
		cont = "(nil)";
	printf("%s", cont);
}
/**
 * print_all - print all args
 * @format: input format string
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int isfirst = 0, i = 0, j;
	opt_t opts[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str}
	};

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (opts[j].c == format[i])
			{
				if (isfirst)
					printf(", ");
				opts[j].func(args);
				isfirst = 1;
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

