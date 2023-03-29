#include "main.h"
#include <limits.h>
/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	int i;
	for (i = INT_MIN; i <= INT_MAX; i++)
	{
		print_number(i);
		_putchar('\n');
	}
						return (0);
}
