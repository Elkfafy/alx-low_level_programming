#include "main.h"
#define LINE_SIZE 1024
/**
 * main - test case for getline
 * Return: 0
 */
int main(int ac, char **av)
{
	char *line;
	int fd, len;

	if (ac == 2)
	{
		line = malloc(sizeof(char) * LINE_SIZE);
		fd = open(av[1], O_RDONLY);
		len = ar_getline(line, fd);
		printf("%s\n", line);
		free(line);
	}
	return (0);
}
