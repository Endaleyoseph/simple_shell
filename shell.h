#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stddef.h>
extern char **environ;


/**
 * struct cmp - structure containing two elements
 * @str: string
 * @fun: function pointer
 * Description: compares strings and return a function
 */

typedef struct cmp
{
	char *str;
	int (*fun)(char **);
} cmp_t;
void free_arg(char **arg);
char **_strtok(char *av);
char *read_line(void);
int get_fun(char **arg);
int _cat(char **arg);
int _lst(char **arg);
int _execute(char **arg);
int exit_t(char **arg);
int _env(char **arg);

#endif
