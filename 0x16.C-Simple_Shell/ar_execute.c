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
	char *sep = ":", *filename = " ", *path1;
	char *path = getenv("PATH"), *path_cpy, *token;
	int i, path_num = 0, new_size;
	
	path_cpy = malloc(sizeof(char) * (ar_strlen(path) + 1));
	if (path_cpy == NULL)
		ar_exerror();
	ar_strcpy(path_cpy, path);
	path1 = malloc(sizeof(char) * (ar_strlen(path) + 1));
	if (path1 == NULL)
		ar_exerror();
	ar_strcpy(path1, path);
	token = ar_strtok(path1, sep);
	while (token != NULL)
	{
		path_num++;
		token = ar_strtok(NULL, sep);
	}
	i = 0;
	token = ar_strtok(path_cpy, sep);
	while (i < path_num)
	{
		new_size = ar_strlen(op) + 2 + ar_strlen(token);
		filename = malloc(sizeof(char) * new_size);
		ar_strcat(filename, token);
		ar_strcat(filename, "/");
		ar_strcat(filename, op);
		if (ar_execve(filename, av, env) != -1)
			return (1);
		free(filename);
		token = ar_strtok(NULL, sep);
		i++;
	}
	free(token);
	free(path1);
	free(path_cpy);
	return (-1);
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
		exit(2);
	if (ar_strcmp(env_op, op) == 0)
	{
		for (i = 0; env[i] != NULL; i++)
			ar_puts(env[i]), _putchar('\n');
		return (1);
	}
	return (ar_execpath(op, av, env));
}
/**
 * is_path - check if path
 * @str: input
 * Return: zero or one
 */
int is_path(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == '/')
			return (1);
	return (0);
}
/**
 * ar_execute - execute operation using argv
 * @av: input argv
 */
void ar_execute(char **av)
{

	extern char **environ;

	
	if (is_path(av[0]))
	{
		if (ar_execve(av[0], av, environ) == -1)
			ar_perror("error");
	}
	else
	{
		ar_execop(av[0], av, environ);
	}
}
