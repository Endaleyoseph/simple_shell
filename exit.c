#include "shell.h"

/**
 * exit_t - exits the shell
 * @arg: argument
 * Return: Always 0 on success
 */

int exit_t(char **arg)
{
	free_arg(arg);
	exit(EXIT_SUCCESS);

	return (0);
}
