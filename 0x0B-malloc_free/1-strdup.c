#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 *           contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL or
 *         if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
	return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	dup = (char *)malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	return (NULL);

	for (i = 0; i <= len; i++)
	dup[i] = str[i];

	return (dup);
}

