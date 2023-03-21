#include <stdio.h>
/**
 * main - return 100 fab number
 *
 * Return: 0
 */
int main(void)
{
	long list[50];
	int i;

	list[0] = 1;
	list[1] = 2;
	for (i = 2; i < 50; i++)
	{
		list[i] = list[i - 1] + list[i - 2];
	}
	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", list[i]);
	}
	printf("%ld\n", list[49]);
	return (0);
}
