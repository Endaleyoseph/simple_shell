#include "shell.h"

/**
 * _lst - provied path for bultin
 * @arg: array of strings
 * Return: _execute on success
 */

int _lst(char **arg)
{
	char *s[] = {"/bin/ls", NULL, NULL, NULL};
	int i = 1;

	while (arg[i] != NULL)
	{
		s[i] = arg[i];
		i++;
	}
	arg = NULL;

	return (_execute(s));
}
