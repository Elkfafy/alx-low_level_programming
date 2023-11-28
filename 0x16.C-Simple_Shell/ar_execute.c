#include "main.h"
/**
 * ar_execpath - execute with path
 * @op: operation name
 * @av: input argv
 * @env: input environment
 * Return: state
 */
int ar_execpath(const char *op, char *const av[], char *const env[])
{
	char *sep = ":", *filename = " ";
	char *path = getenv("PATH"), *path_cpy, *token;
	int i, path_num = 1, new_size;
	
	path_cpy = malloc(sizeof(char) * (ar_strlen(path) + 1));
	if (path_cpy == NULL)
		ar_exerror();
	ar_strcpy(path_cpy, path);
	token = ar_strtok(path, sep);
	while (token != NULL)
	{
		path_num++;
		token = ar_strtok(NULL, sep);
	}
	i = 0;
	token = ar_strtok(path_cpy, sep);
	while (i <= path_num && execve(filename, av, env) == -1)
	{
		new_size = ar_strlen(op) + 2 + ar_strlen(token);
		filename = malloc(sizeof(char) * new_size);
		ar_strcat(filename, token);
		ar_strcat(filename, "/");
		ar_strcat(filename, op);
		token = ar_strtok(NULL, sep);
		i++;
	}
	if (i > path_num)
		return (-1);
	else
		return (1);
}

/**
 * ar_execop - execute operation
 * @op: input operation
 * @av: input argv
 * @env: input environment
 * Return: state
 */
int ar_execop(const char *op, char *const av[], char *const env[])
{
	int i;
	char *exit_op = "exit";
	char *env_op = "env";

	if (ar_strcmp(exit_op, op) == 0)
		exit(0);
	if (ar_strcmp(env_op, op) == 0)
	{
		for (i = 0; env[i] != NULL; i++)
			ar_puts(env[i]), _putchar('\n');
		return (1);
	}
	return (ar_execpath(op, av, env));
}	
/**
 * ar_execute - execute operation using argv
 * @av: input argv
 */
void ar_execute(char **av)
{
	int state;
	extern char **environ;

	if (av[0][0] == '/')
	{
		state = execve(av[0], av, environ);
		if (state == -1)
			ar_perror("invalid operation please input valid operation");
	}
	else
	{
		state = ar_execop(av[0], av, environ);
		if (state == -1)
			ar_perror("invalid operation please input valid operation");
	}
}
