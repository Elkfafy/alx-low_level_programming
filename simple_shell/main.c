#include "main.h"
/**
 * main - main
 * @av: args vector
 * @UNUSED: input unused
 * Return: 0
 */
int main(int ac UNUSED, char *av[] UNUSED)
{
	char *prompt = "ar$ ";
	int i, status;
	char *line = NULL, *sep = " ", **argv = NULL;
	size_t line_len = 0;
	ssize_t chars_read;

	while (1)
	{
		ar_puts(prompt);
		chars_read = getline(&line, &line_len, stdin);
		if (chars_read < 0)
		{
			perror("read line error");
			free(line);
			return (-1);
		}
		for (i = 0; line[i] != '\0'; i++)
			if (line[i] == '\n')
			{
				line[i] = '\0';
				line_len = i;
				break;
			}
		if (line_len == 0)
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
