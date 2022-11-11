#include "shell.h"

/**
 * _env - fuction to print environment
 * @arg: argument to be void
 * Return: 0 on sucess
 */

int _env(char **arg)
{
	int i = 0;

	arg = environ;
	while (arg[i] != NULL)
	{
		printf("%s\n", arg[i]);
		i++;
	}
	return (0);
}
