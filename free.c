#include "shell.h"

/**
 * free_arg - frees argument
 * @arg: argument
 *
 */

void free_arg(char **arg)
{
	int i = 0;

	while (arg[i] != NULL)
	{
		free(arg[i]);
		i++;
	}
	arg = NULL;
}
