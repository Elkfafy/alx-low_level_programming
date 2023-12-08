#ifndef MAIN_H
#define MAIN_H
#define EXIT_CODE 3040
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#define UNUSED __attribute__((__unused__))
/**
 * op_t - operation type
 */
typedef struct op {
	char *name;
	int (*op)(char **);
} op_t;
int ar_putchar(char);
int ar_puts(char *);
int ar_strcmp(const char *, const char *);
int ar_mkdir(char **);
int ar_env(char **);
int ar_execvp(char **);
int ar_exit(char **);
int ar_execute(char **);
char *ar_getpath(const char *);
char *ar_strcat(char *, const char *);
char *ar_strtok(char *, const char *);
char **ar_split(const char *, const char *);
char *ar_strdub(const char *);
int ar_strlen(const char *);
int ar_execve(const char *, char *const [], char *const []);
#endif
