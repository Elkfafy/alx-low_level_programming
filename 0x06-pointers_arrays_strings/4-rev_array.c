#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int start, end, temp;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
