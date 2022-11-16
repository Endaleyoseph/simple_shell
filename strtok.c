#include "shell.h"

/**
 * check_buffer - checks the size of buffer
 * @save: buffer to be checked
 * @buf_size: allocated size
 * @i: used size
 * Return: pointer to the buffer
 */

char **check_buffer(char **save, int buf_size, int i)
{
	if (i < buf_size)
	{
		save = realloc(save, i * sizeof(char *));
		if (save == NULL)
		{
			dprintf(2, "Error: Can't reallocate");
			return (NULL);
		}
	}
	return (save);
}

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
	save = malloc(sizeof(char *) * buf_size);
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
	save = check_buffer(save, buf_size, i);
	return (save);
}
