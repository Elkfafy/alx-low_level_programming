#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - create array of integers
 * @min: min value
 * @max: max value
 *
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (NULL);
	for (i = min; i <= max; i++)
		arr[i - min] = i;
	return (arr);
}
