#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: input name
 * @f: method prints that name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
