#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of diag
 * @a: input array
 * @size: input size of array
 */
void print_diagsums(int *a, int size)
{
	int i, x, y, sumF, sumL;

	sumF = 0;
	sumL = 0;
	for (i = 0; i < size * size; i++)
	{
		x = i / size;
		y = i % size;
		if (x == y)
			sumF += a[i];
		if (x == (size - y - 1))
			sumL += a[i];
	}
	printf("%d, %d\n", sumF, sumL);
}
