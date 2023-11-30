#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#define LINESIZE 1024
int ar_puts(const char *);
int _putchar(char);
char *ar_strcpy(char *, const char *);
ssize_t ar_getline(char **, size_t *, FILE *);
char *ar_strtok(char *, const char *);
void ar_perror(const char *);
void ar_exerror(void);
int ar_strcmp(const char *, const char *);
void ar_execute(char **);
char *ar_strcat(char *, const char *);
size_t ar_strlen(const char *str);
int ar_execve(const char *, char *const[], char *const[]);
#endif
