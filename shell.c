#include "shell.h"
#include <stddef.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
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
