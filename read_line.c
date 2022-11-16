#include "shell.h"

/**
 * read_line - reads a line from stdin
 *
 * Return: pointer to the buffer
 */

char *read_line(void)
{
	char *str = NULL;
	size_t bufsize = 0;

	if (getline(&str, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
		{
			printf("exit\n");
			free(str);
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("can't read line");
			exit(EXIT_FAILURE);
		}
	}
	return (str);
}
