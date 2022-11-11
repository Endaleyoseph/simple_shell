#include "shell.h"

/**
 * _cat - provied path for bultin
 * @arg: array of strings
 * Return: _execute on success
 */

int _cat(char **arg)
{
	char *s[] = {"/bin/cat", NULL, NULL, NULL};
	int i = 1;

	while (arg[i] != NULL)
	{
		s[i] = arg[i];
		i++;
	}

	return (_execute(s));
}
