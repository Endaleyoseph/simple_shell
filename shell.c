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
	(void)ac;
	(void)av;

	char *str;
	char **arg;

	do {
		if (isatty(STDIN_FILENO))
			printf("#cisfun$ ");
		str = read_line();
		arg = _strtok(str);
		get_fun(arg);
	} while (1);
	printf("\n");

	return (0);
}
