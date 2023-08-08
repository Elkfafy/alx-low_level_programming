#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
	int i;
	char **test;
	size_t j;

	for (i = 0; i < argc; i++)
	{
		test = realloc(test, (i + 1) * sizeof(char *));
		if (test == NULL)
		{
			printf("cann't realloc");
			return (1);
		}
		test[i] = malloc(strlen(argv[i]) * sizeof(char));
		if (test[i] == NULL)
		{
			for (; i >=0; i--)
				free(test[i]);
			free(test);
			printf("failed in malloc");
			return (1);
		}
		for (j = 0; j <= strlen(argv[i]); j++)
			test[i][j] = argv[i][j];
	}
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", test[i]);
	}
	return (0);
}
