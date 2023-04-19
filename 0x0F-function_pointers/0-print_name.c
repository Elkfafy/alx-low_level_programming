#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print a name
 * @name: input name
 * @f: method prints that name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
