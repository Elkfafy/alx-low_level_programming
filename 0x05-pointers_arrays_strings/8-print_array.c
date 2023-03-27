#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: input array
 * @n: length of array
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		putchar('\n');
	printf("%d", a[0]);
	for (i = 1; i < n; i++)
		printf(", %d", a[i]);
	putchar('\n');
}
