#include "shell.h"

/**
 * _strtok - spilts a string into token
 * @av: array of strings
 * Return: array of tokens
 */

char **_strtok(char *av)
{
	char *token1;
	char **save;
	int buf_size;
	int i = 0;

	buf_size = 1024;
	save = malloc(buf_size * sizeof(char *));
	if (save == NULL)
	{
		dprintf(2, "Error: failed to allocate memory\n");
		return (NULL);
	}

	token1 = strtok(av, " \n");
	while (token1 != NULL)
	{
		save[i] = token1;
		i++;

		if (i >= buf_size)
		{
			buf_size += 1024;
			save = realloc(save, buf_size * sizeof(char *));
			if (save == NULL)
			{
				dprintf(2, "Error: Can't reallocate memory");
				return (NULL);
			}
		}
		token1 = strtok(NULL, " \n");
	}
	save[i] = NULL;
	return (save);
}
