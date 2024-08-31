#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of the program into a single string.
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i, j, len = 0, total_len = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	len = strlen(av[i]);
	total_len += len + 1;
	}

	result = malloc(total_len + 1);
	if (result == NULL)
	return (NULL);

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
	len = strlen(av[i]);
	for (j = 0; j < len; j++)
		result[total_len++] = av[i][j];
	result[total_len++] = '\n';
	}
	result[total_len] = '\0';

	return (result);
}

