#include "shell.h"

/**
 * _execute - executes an argument
 * @arg: argument entered by user
 * Return: 1 on success
 * -1 is returned on failure
 */

int _execute(char **arg)
{
	int status;
	pid_t pid;

	pid = fork();
	if (pid < 0)
		perror("./shell");

	if (pid == 0)
	{
		if (execve(arg[0], arg, NULL) == -1)
		{
			perror("./shell");
		}
	}

	else
	{
		wait(&status);
	}

	return (1);
}
