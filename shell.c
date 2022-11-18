#include "shell.h"
#include <stddef.h>

/**
 * main - Entry point
 * @ac: number of args
 * @av: arument entered by usr
 * Return: 0 on success
 */

int main(int ac, char *av[])
{
	char *str;
	char **arg;

	(void)ac;
	(void)av;

	do {
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "#cisfun$ ", 9);
		str = read_line();
		arg = _strtok(str);
		get_fun(arg);
	} while (1);
	printf("\n");

	return (0);
}
