#include "shell.h"

/**
 * get_fun - finds a function that matches the first arg
 * @arg: argument passed by usr
 * Return: a matching function or _execute
 */

int get_fun(char **arg)
{
	cmp_t ch[] = {
		{"ls", _lst},
		{"exit", exit_t},
		{NULL, NULL}
	};
	int i = 0;

	while (ch[i].str != NULL)
	{
		if ((strcmp(ch[i].str, arg[0])) == 0)
		{
			return (ch[i].fun(arg));
		}
		i++;
	}

	return (_execute(arg));
}
