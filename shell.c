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
	int val;

	do {
		printf("#Myshell$ ");
		str = read_line();
		arg = _strtok(str);
		val = _execute(arg);
	} while (val);
	printf("\n");

	return (0);
}
