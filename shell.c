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
		printf("#cisfun$ ");
		str = read_line();
		arg = _strtok(str);
		get_fun(arg);
	} while (1);
	free_arg(arg);
	printf("\n");

	return (0);
}
