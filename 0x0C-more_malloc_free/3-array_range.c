#include "main.h"
/**
 * array_range - return array from range of numbers
 * @min: min number
 * @max: max number
 *
 * Return: array of ranged numbers
 */
int *array_range(int min, int max)
{
	int i, *result;

	if (min > max)
		return (NULL);
	result = malloc((max - min + 1) * sizeof(int));
	if (result == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		result[i - min] = i;
	return (result);
}
