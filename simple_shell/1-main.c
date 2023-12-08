#include "main.h"
/**
 * main - main
 * @av: args vector
 * @ac: input ac
 * Return: 0
 */
int main(int ac, char *av[])
{
	char *prompt = "ar$ ";
	int i, status, fd = 0;
	char *line, *sep = " ", **argv = NULL;
	int chars_read;

	line = malloc(sizeof(char) * LINE_SIZE);
	if (line == 0)
	{
		perror("main error");
		return (-1);
	}
	printf("%s\n", av[0]);
	if (ac == 2)
		fd = open(av[1], O_RDONLY);
	while (1)
	{
		if (!fd)
			ar_puts(prompt);
		chars_read = ar_getline(line, fd);
		if (chars_read < 0)
		{
			free(line);
			return (-1);
		}
		for (i = 0; i < chars_read; i++)
			if (line[i] == '\n')
			{
				chars_read = i;
				line[i] = '\0';
			}
		if (chars_read == 0)
			continue;
		argv = ar_split(line, sep);
		if (argv == NULL)
			return (-1);
		status = ar_execute(argv);
		for (i = 0; argv[i] != NULL; i++)
			free(argv[i]);
		free(argv);
		if (status == EXIT_CODE)
			break;
	}
	free(line);
	return (0);
}
